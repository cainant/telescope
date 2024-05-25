#include "app.h"

void App::init() {
    const int screenWidth = 1280;
    const int screenHeight = 720;
    SetTargetFPS(60);
    InitWindow(screenWidth, screenHeight, "Telescope");
}

void App::shutdown() {
    CloseWindow();
}

void App::draw() {
    BeginDrawing();
    ClearBackground(WHITE);

    auto draw_systems = [](const std::function<void(void)>& func) { func(); };
    std::for_each(draw_system_vector.begin(), draw_system_vector.end(), draw_systems);

    draw_gui();

    EndDrawing();
}

void App::draw_gui() {
    DrawFPS(GetScreenWidth() - 95, 10);
}

void App::update() {
    auto update_systems = [](const std::function<void(void)>& func) { func(); };
    std::for_each(update_system_vector.begin(), update_system_vector.end(), update_systems);
}


bool App::is_running() {
    return !WindowShouldClose();
}

void App::add_system(const System& system) {
    if (system.draw_system) {
        draw_system_vector.push_back(system.draw_system);
    }
    if (system.update_system) {
        update_system_vector.push_back(system.update_system);
    }
}

