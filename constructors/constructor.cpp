#include <iostream>
using namespace std;

// Define a class
class Person
{
private:
    string firstName{};
    string lastName{};
    int age{};
    // Constructor
public:
    Person(string firstName, string lastName, int age)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
    // Setter
    void setName(string name)
    {
        this->firstName = name;
    };
    // Getter
    string getName()
    {
        return this->firstName;
    }
};

int main()
{
    // Instantiate a class
    Person p1{"Sergei", "Sokolov", 39};
    Person p2{"Daniil", "Sokolov", 8};
    cout << p1.getName() << endl;
    cout << p2.getName() << endl;
}
