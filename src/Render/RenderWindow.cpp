#include "RenderWindow.hpp"

void Window::makeWindow(){
    sf::RenderWindow window(sf::VideoMode(SCREENWIDTH, SCREENHEIGHT), winName);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
}