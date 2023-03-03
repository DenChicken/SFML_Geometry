#include "Application.h"

#include <SFML/System/Vector2.hpp>
#include <SFML/Window/VideoMode.hpp>

using namespace sf;
Application::Application()
    : BaseObject("Application"), m_window(nullptr)
{
    m_window = new sf::RenderWindow(sf::VideoMode(sf::Vector2u(200, 200)), "Window");
}

Application::Application(uint32_t width, uint32_t height, const mystr& title)
    : BaseObject("Application"), m_window(nullptr)
{
    m_window = new sf::RenderWindow(sf::VideoMode(sf::Vector2u(width, height)), title);
}

Application::Application(sf::RenderWindow* window)
    : BaseObject("Application"), m_window(window)
{
    
}

Application::~Application()
{
    if (m_window)
    {
        delete m_window;
    }
}

void Application::execute()
{
	while (m_window->isOpen())
	{
		Event event;
		while (m_window->pollEvent(event))
		{
			if (event.type == Event::Closed)
                m_window->close();
		}
        m_window->display();
	}
}
