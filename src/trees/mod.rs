mod debug_display;

#[derive(Debug)]
struct Tree {
    // static
    branches: Vec<bevy::prelude::Segment3d>,
    // at ends of branches
    meristems: Vec<bevy::prelude::Vec3>,
}

