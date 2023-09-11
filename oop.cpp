// Class in C++
#include <iostream>
using namespace std;

// Define a person class
class Person
{
private:
    double income;

public:
    string firstName;
    string lastName;
    int age;
    // Constructor
    Person(string pFirstName, string pLastName, int pAge, double pIncome)
    {
        this->firstName = pFirstName;
        this->lastName = pLastName;
        this->age = pAge;
        this->setIncome(pIncome);
    };
    // Setter method (void because it does not return a value)
    void setIncome(double pIncome)
    {
        this->income = pIncome;
    };
    // Getter method
    double getIncome()
    {
        return this->income;
    };
};
int main()
{
    Person person1("Sergei", "Sokolov", 39, 300.5);
    cout << person1.getIncome() << endl;
    return 0;
}
