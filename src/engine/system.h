#ifndef TELESCOPE_SYSTEM_H
#define TELESCOPE_SYSTEM_H


#include <functional>
#include <utility>

class System {
public:
    std::function<void(void)> draw_system;
    std::function<void(void)> update_system;

    System(std::function<void(void)> update_system, std::function<void(void)> draw_system)
        : update_system(std::move(update_system)), draw_system(std::move(draw_system)) {}
};


#endif //TELESCOPE_SYSTEM_H
