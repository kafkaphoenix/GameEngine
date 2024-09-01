find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
target_compile_definitions(${PROJECT_NAME} PRIVATE "GLFW_INCLUDE_NONE")
find_package(glm CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(entt CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
set(nlohmann-json_IMPLICIT_CONVERSIONS OFF)
find_package(assimp CONFIG REQUIRED)
find_package(Stb REQUIRED)
target_include_directories(${PROJECT_NAME} PRIVATE ${Stb_INCLUDE_DIR})
target_compile_definitions(${PROJECT_NAME} PRIVATE "STBI_FAILURE_USERMSG")
find_package(spdlog CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE
    glad::glad
    glfw
    glm::glm-header-only
    imgui::imgui
    EnTT::EnTT
    nlohmann_json::nlohmann_json
    assimp::assimp
    spdlog::spdlog_header_only
)