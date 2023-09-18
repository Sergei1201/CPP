#include <iostream>
using namespace std;

// Define Struct
// struct Person
// {
//     string firstName, lastName;
//     int age;
// };

// int main()
// {
//     // Initialize struct
//     Person person1;
//     person1.firstName = "Sergey";
//     person1.lastName = "Sokolov";
//     cout << person1.firstName << endl;
//     cout << person1.lastName << endl;
// }
// struct Employee
// {
//     int age{};
//     double wage{};
//     string firstName{};
//     string lastName{};
// };

// int main()
// {
//     // Instantiate Employee
//     Employee employee1{35, 2000, "Sergei", "Sokolov"};
//     Employee employee2{39, 3500, "Alex", "Smith"};

//     if (employee1.wage > employee2.wage)
//     {
//         cout << employee1.firstName << " makes more than " << employee2.firstName << endl;
//     }
//     else
//     {
//         cout << employee2.firstName << " makes more than " << employee1.firstName << endl;
//     }
//     return 0;
// }

// Passing struct to a function by reference to avoid making copies
// struct Employee
// {
//     string firstName{};
//     string lastName{};
//     int age{};
//     double wage{};
// };

// // Passing struct by reference
// void printEmployee(Employee &employee)
// {
//     cout << employee.firstName << endl;
//     cout << employee.lastName << endl;
//     cout << employee.age << endl;
//     cout << employee.wage << endl;
// }

// int main()
// {
//     Employee empl1{"Sergei", "Sokolov", 39, 2500};
//     Employee empl2{"Alex", "Smith", 25, 2000};

//     printEmployee(empl1);
//     cout << endl;
//     printEmployee(empl2);
//     cout << endl;
//     return 0;
// }

// Accessing members of an object through pointers that hold a memory address of objects
struct Person
{
    string firstName{};
    string lastName{};
    int age{};
};

int main()
{
    Person p1{"Sergei", "Sokolov", 39};
    // Accessing members of the object through pointers that hold a memory address
    Person *ptr{&p1};
    cout << ptr->firstName << endl;
    cout << ptr->lastName << endl;
    cout << ptr->age << endl;
    return 0;
}