#include <iostream>
#include <vector>
using namespace std;

struct Vertex
{
    int x, y, z;

    Vertex(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        // Alternative syntax for creating a constructor
        /*
        Vector(int x, int y, int z): x(x), y(y), z(z)
        */
    }
};

int main()
{
    vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for (int i = 0; i < vertices.size(); i++)
    {
        vertices[i];
    }
}