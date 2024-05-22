#ifndef TELESCOPE_APP_H
#define TELESCOPE_APP_H

#include <cstdlib>
#include "raylib.h"
#include "../particles.h"
#include <string>
#include <vector>

class App {
private:
    void draw_gui();
    void draw_particles();

    const Rectangle frame_rect = {10, 10, 1260, 700};
    int number_of_particles;
    const std::string number_of_particles_string = "Number of particles: ";
    std::vector<Particles> particles_vector;

public:

    void draw();
    void init();
    void shutdown();
    bool is_running();
};


#endif //TELESCOPE_APP_H
