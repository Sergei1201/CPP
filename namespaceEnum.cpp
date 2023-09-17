#include <iostream>
using namespace std;

// This tutorials explains how to properly use enumerators in order to avoid name collisions and polluting global scope by using namespace

namespace Color
{

    enum Color
    {
        blue,
        white,
        red,
        green,
    };
}

namespace Feeling
{

    enum Feeling
    {
        sad,
        happy,
        upset,
        overTheMoon,
        devastated,
        frustrated,
        green,
    };

}

int main()
{
    Feeling::Feeling person(Feeling::green);
    Color::Color myColor(Color::green);
}