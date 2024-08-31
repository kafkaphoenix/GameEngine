#include "engine.h"
#include <iostream>
#include <glm/glm.hpp>
#include "core/core.h"

namespace engine {
    void Engine::start() {
        std::cout << "Engine started! testing glm library passed! vec3: " << glm::vec3(1.0f, 2.0f, 3.0f).x << std::endl;
        engine::core::Core core;
        core.start();
    }
}