use bevy::ecs::component::Component;

mod debug_display;

#[derive(Debug, Component)]
pub struct Tree {
    // static
    pub branches: Vec<bevy::prelude::Segment3d>,
    // at ends of branches
    pub meristems: Vec<bevy::prelude::Vec3>,
}

