use bevy::{
    prelude::*,
    asset::RenderAssetUsages,
    mesh::{Indices, VertexAttributeValues},
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
        let branch_mesh = create_debug_mesh(tree_struct);

        // update mesh
        commands.entity(tree_entity).insert(Mesh3d(meshes.add(branch_mesh)));
        commands.entity(tree_entity).insert(MeshMaterial3d(materials.add(StandardMaterial {
            base_color: Color::srgb(1.0, 1.0, 1.0),
            ..Default::default()
        })));
    }
}

fn create_debug_mesh(
    tree: &super::Tree,
) -> bevy::mesh::Mesh {
    Mesh::new(
        PrimitiveTopology::LineList, 
        RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD
    )
        .with_inserted_attribute(
            Mesh::ATTRIBUTE_POSITION, 
            tree.branches.iter()
                .flat_map(|branch| [branch.point1(), branch.point2()])
                .collect::<Vec<Vec3>>(),
        )
}
