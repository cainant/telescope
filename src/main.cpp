#include "engine/app.h"
#include "particles.h"

int main()
{
    App app{};
    app.init();

    Particles particles{};
    System particles_system{
            [&particles] () mutable { particles.update_particles(); },
            [&particles] () mutable { particles.draw_particles(); }
    };

    app.add_system(particles_system);

    while (app.is_running())
    {
        std::cout << GetFrameTime() << std::endl;
        app.update();
        app.draw();
    }

    app.shutdown();
    return 0;
}