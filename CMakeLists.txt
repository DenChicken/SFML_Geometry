# CMakeList.txt: проект CMake для SFML_Geometry; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("SFML_Geometry")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (SFML_Geometry "src/main.cpp" )

add_subdirectory(modules/SFML)
target_include_directories(${PROJECT_NAME} PUBLIC modules/SFML/include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SFML_Geometry PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
