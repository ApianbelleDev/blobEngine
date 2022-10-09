#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Window{
    string winName = "Game";
    const int SCREENWIDTH = 1600;
    const int SCREENHEIGHT = 900;
    
    public:
        void makeWindow();
};