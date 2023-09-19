#include <iostream>
using namespace std;

// Define a class
class Person
{
private:
    string m_firstName{};
    string m_lastName{};
    int m_age{};
    // Constructor
public:
    Person(string firstName, string lastName, int age)
        : m_firstName(firstName), m_lastName(lastName), m_age(age)
    {
        cout << "Constructor ran..." << endl;
    }
    // Setter
    void setFirstName(string firstName)
    {
        this->m_firstName = firstName;
    }
    // Getter
    string getFirstName()
    {
        return this->m_firstName;
    }
};

int main()
{
    // Instantiate the class
    Person p1{"Sergei", "Sokolov", 39};
    cout << p1.getFirstName() << endl;
    return 0;
}