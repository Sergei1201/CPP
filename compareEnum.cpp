#include <iostream>
using namespace std;

enum Color
{
    white,
    red,
    blue,
    yellow,
    cyan,
};

int main()
{
    Color shirtColor{blue};
    if (shirtColor == white)
    {
        cout << "The color of the shirt is white";
    }
    else
    {
        cout << "The color of the shirt is not white";
    }
}