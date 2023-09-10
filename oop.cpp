#include <iostream>
using namespace std;
// Create a basic person class
class Person
{

public:
    string firstName;
    string lastName;
    int age;
    // Constructor
    Person(string firstName, string lastName, int age)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
};

int main()
{
    // Instantiate the person class
    Person person1("Sergei", "Sokolov", 39);
    // person1.firstName = "John";
    // person1.lastName = "Doe";
    // person1.age = 35;
    cout << person1.firstName << endl;
    cout << person1.lastName << endl;
    cout << person1.age << endl;
    return 0;
}