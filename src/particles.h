#ifndef TELESCOPE_PARTICLES_H
#define TELESCOPE_PARTICLES_H


#include <vector>
#include <iostream>
#include "raylib.h"

class Particles {
private:
    std::vector<Particles> particles_vector;
    Vector2 particle_pos = {static_cast<float>(GetScreenHeight() / 2.0), 0};
    Vector2 particle_vec = { 0 };
    double airborne_initial_time = 0;
    bool grounded = false;

    void apply_gravity();
public:
    void draw_particles();
    void update_particles();
};


#endif //TELESCOPE_PARTICLES_H
