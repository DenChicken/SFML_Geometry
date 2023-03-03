
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("SFML_Geometry")

add_executable (${PROJECT_NAME} "src/main.cpp" "src/include/Application.h" "src/include/BaseObject.h" "src/BaseObject.cpp" "src/Application.cpp")
#set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE $<CONFIG:Debug>)

set(BUILD_SHARED_LIBS FALSE)
add_subdirectory(modules/SFML)

target_link_libraries(${PROJECT_NAME} sfml-graphics)
target_link_libraries(${PROJECT_NAME} sfml-audio)