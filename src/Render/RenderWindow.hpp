#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Window{
    string winName = "Game";
    const int SCREENWIDTH = 640;
    const int SCREENHEIGHT = 480;
    
    public:
        void makeWindow();
};