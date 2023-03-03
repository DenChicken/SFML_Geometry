#ifndef APPLICATION_H
#define APPLICATION_H

#include <SFML/Graphics.hpp>

#include "BaseObject.h"

class Application : BaseObject
{
public:
    explicit Application(uint32_t width = 1280, uint32_t height = 720, const mystr& title = "SFML_Geometry");
    explicit Application(sf::RenderWindow* window);
    virtual ~Application();

    void execute();

private:
    sf::RenderWindow* m_window;
};


#endif // APPLICATION_H