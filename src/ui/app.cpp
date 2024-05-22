#include "app.h"

void App::init() {
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Telescope");
    SetTargetFPS(60);

    particles_vector.clear();
    particles_vector.emplace_back();
}

void App::shutdown() {
    CloseWindow();
}

void App::draw() {
    BeginDrawing();
    ClearBackground(WHITE);
    draw_particles();
    draw_gui();
    EndDrawing();
}

void App::draw_gui() {
    DrawRectangleLinesEx(frame_rect, 2, BLACK);
}

void App::draw_particles() {
    for (auto particle : particles_vector) {
        DrawCircleV(particle.pos, particle.radius, RED);
    }
};

bool App::is_running() {
    return !WindowShouldClose();
}

