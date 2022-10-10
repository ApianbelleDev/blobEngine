#include "RenderWindow.hpp"


void Window::makeWindow(){
    std::string currentState = "Gameplay";
    sf::RenderWindow window(sf::VideoMode(SCREENWIDTH, SCREENHEIGHT), winName);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(0,181,226));
        //draw game states here
        if(currentState == "Menu"){
            //draw menu here
        }
        else if(currentState == "Gameplay"){
            //draw gameplay here
        }
        window.display();
    }
}