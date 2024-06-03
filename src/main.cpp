#include "engine/app.h"
#include "particles.h"

int main()
{
    telescope::App app;
    app.init();

    Particles particles{};
    System particles_system{
            [&particles] () mutable { particles.update_particles(); },
            [&particles] () mutable { particles.draw_particles(); }
    };

    app.add_system(particles_system);

    while (app.is_running())
    {
        app.update();
        app.draw();
    }

    app.shutdown();
    return 0;
}