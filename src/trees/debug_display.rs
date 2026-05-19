use bevy::{
    prelude::*,
    asset::RenderAssetUsages,
    render::render_resource::PrimitiveTopology,
};

#[derive(Debug, Component)]
pub struct DebugDisplay;

pub fn tree_debug_display_system(
    trees: Query<(Entity, &super::Tree), With<DebugDisplay>>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<StandardMaterial>>,
    mut commands: Commands,
) -> () {
    for (tree_entity, tree_struct) in trees {
        // create mesh
        if let Ok(branch_mesh) = create_debug_mesh(tree_struct) {
            commands.entity(tree_entity).insert(Mesh3d(meshes.add(branch_mesh)));
        }

        // update mesh
        commands.entity(tree_entity).insert(MeshMaterial3d(materials.add(StandardMaterial {
            base_color: Color::srgb(0.0, 1.0, 0.0),
            unlit : true,
            ..Default::default()
        })));
    }
}

fn create_debug_mesh(
    tree: &super::Tree,
) -> Result<Mesh> {
    let mut mesh = Mesh::new(
        PrimitiveTopology::LineList, 
        RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD
    )
        .with_inserted_attribute(
            Mesh::ATTRIBUTE_POSITION, 
            tree.branches.iter()
                .flat_map(|branch| [branch.point1(), branch.point2()])
                .collect::<Vec<Vec3>>(),
        );

    mesh.merge(
        &Mesh::new(
            PrimitiveTopology::PointList, 
            RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD
        )
            .with_inserted_attribute(
                Mesh::ATTRIBUTE_POSITION, 
                tree.meristems.clone(),
            )
    )?;
    
    Ok(mesh)
}
