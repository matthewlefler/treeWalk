use bevy::{
    ecs::component::Component,
    prelude::*,
};

pub mod debug_display;

#[derive(Debug, Component)]
pub struct Tree {
    // static
    pub branches: Vec<bevy::prelude::Segment3d>,
    // at ends of branches
    pub meristems: Vec<bevy::prelude::Vec3>,
}

pub fn debug_setup(
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<StandardMaterial>>,
    mut commands: Commands,
) {
    commands.spawn(
        (
            // Mesh3d(meshes.add(Sphere::new(1.0))),
            MeshMaterial3d(materials.add(Color::srgb(1.0, 1.0, 1.0))),
            Transform::from_xyz(0.0, 0.0, 0.0),
            Tree {
                branches: vec![Segment3d::new(Vec3::new(0.0, 0.0, 0.0), Vec3::new(0.0, 1.0, 0.0))],
                meristems: vec![Vec3::new(0.0, 1.0, 0.0)],
            },
            debug_display::DebugDisplay,
        )
    );
}
