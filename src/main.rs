mod trees;
mod fps_camera;

use bevy::prelude::*;

fn main() {
    App::new()
        .add_plugins(
            DefaultPlugins.set(WindowPlugin {
                primary_window: Some(Window {
                    title: "tree-walk".into(),
                    // resolution: (600, 600).into(),
                    ..default()
                }),
                ..default()
            }),
        )
        .add_plugins((

        ))
        .add_systems(Startup, (
            fps_camera::spawn_player_camera,
            debug_setup,
        ))
        .add_systems(Update, (
            fps_camera::move_player,
            fps_camera::grab_mouse,
        ))
        .run();
}

// point light and debug axii
fn debug_setup(
    mut commands: Commands,
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<StandardMaterial>>,
) {
    // Light
    commands.spawn((
        PointLight {
            shadows_enabled: false,
            ..default()
        },
        Transform::from_xyz(0.0, 0.0, 0.0),
    ));

    // temp debug axii 
    {
        let pos = Vec3::new(-2.0, 0.0, -1.0);
        commands.spawn((
            Mesh3d(meshes.add(Segment3d::new(Vec3::ZERO, Vec3::X))),
            Transform::from_translation(pos),
            MeshMaterial3d(materials.add(StandardMaterial {
                base_color : Color::srgb(1.0, 0.0, 0.0),
                unlit : true,
                ..Default::default()
            })),
        ));
        commands.spawn((
            Mesh3d(meshes.add(Segment3d::new(Vec3::ZERO, Vec3::Y))),
            Transform::from_translation(pos),
            MeshMaterial3d(materials.add(StandardMaterial {
                base_color : Color::srgb(0.0, 1.0, 0.0),
                unlit : true,
                ..Default::default()
            })),
        ));
        commands.spawn((
            Mesh3d(meshes.add(Segment3d::new(Vec3::ZERO, Vec3::Z))),
            Transform::from_translation(pos),
            MeshMaterial3d(materials.add(StandardMaterial {
                base_color : Color::srgb(0.0, 0.0, 1.0),
                unlit : true,
                ..Default::default()
            })),
        ));
    }
}