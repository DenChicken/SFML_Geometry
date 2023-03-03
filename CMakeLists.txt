
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("SFML_Geometry")

add_executable (SFML_Geometry "src/main.cpp" "src/Application.h" "src/BaseObject.h" "src/BaseObject.cpp" "src/Application.cpp")

set(BUILD_SHARED_LIBS FALSE)
add_subdirectory(modules/SFML)


target_link_libraries(${PROJECT_NAME} sfml-graphics)
target_link_libraries(${PROJECT_NAME} sfml-audio)