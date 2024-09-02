#include <catch2/catch_test_macros.hpp>
#include "gameengine/engine.h"

TEST_CASE("Engine::start()") {
    engine::Engine engine;
    engine.start();
}