#include "particles.h"

void Particles::draw_particles() {
    DrawCircleV(this->particle_pos, 10, RED);
}

void Particles::update_particles() {
    this->apply_gravity();
    if (GetFrameTime() == 0) {
        return;
    }
    this->particle_pos.y += this->particle_vec.y * GetFrameTime();
}

void Particles::apply_gravity() {
    const float GRAVITY_FACTOR = 9.8f;
    this->particle_vec.y += GRAVITY_FACTOR * GetFrameTime();
}

