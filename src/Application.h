#ifndef APPLICATION_H
#define APPLICATION_H

#include <SFML/Graphics.hpp>

#include "BaseObject.h"

class Application : BaseObject
{
public:
    explicit Application();
    explicit Application(uint32_t width, uint32_t height, const mystr &title);
    explicit Application(sf::RenderWindow *window);
    virtual ~Application();

    void execute();

private:
    sf::RenderWindow* m_window;
};


#endif // APPLICATION_H