#ifndef TELESCOPE_APP_H
#define TELESCOPE_APP_H

#include <cstdlib>
#include "raylib.h"
#include "system.h"
#include <string>
#include <vector>
#include <functional>

namespace telescope {
    class App {
    private:
        const std::string number_of_particles_string = "Number of particles: ";
        std::vector<std::function<void(void)>> draw_system_vector;
        std::vector<std::function<void(void)>> update_system_vector;

        void draw_gui();

    public:
        void draw();

        void update();

        void init();

        void add_system(const System &system);

        void shutdown();

        bool is_running();
    };
}
#endif //TELESCOPE_APP_H
