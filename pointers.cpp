#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Entity
{
public:
    // Constructor
    Entity()
    {
        cout << "Created Entity" << endl;
    }
    // Destructor
    ~Entity()
    {
        cout << "Entity destroyed" << endl;
    }
    // Methods
    void Print()
    {
        cout << "The print method ran..." << endl;
    }
};

int main()
{
    { // Unique pointer
        unique_ptr<Entity> entity = make_unique<Entity>();
        // Shared pointer
        shared_ptr<Entity> sharedEntity = make_shared<Entity>();

        entity->Print();
    }

    // int var = 16;
    // int *ptr = &var;
    // cout << ptr << endl;
    // return 0;
    cin.get();
}

// Smart pointers in C++
