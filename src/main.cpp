#include "raylib.h"
#include "ui/app.h"



int main()
{
    App app{};
    app.init();
    while (app.is_running())
    {
        app.draw();
    }

    app.shutdown();
    return 0;
}