#include <iostream>
using namespace std;

// class Person
// {
// public:
//     string firstName{};
//     string lastName{};
//     int age{};
// };

// void personInfo(Person &person)
// {
//     cout << person.firstName << endl;
//     cout << person.lastName << endl;
//     cout << person.age << endl;
// };

// int main()
// {
//     Person p1{"Sergei", "Sokolov", 39};
//     personInfo(p1);
//     return 0;
// }

// struct Person
// {
//     string firstName{};
//     string lastName{};
//     int age{};

//     void personInfo()
//     {
//         cout << this->firstName << endl;
//         cout << this->lastName << endl;
//         cout << this->age << endl;
//     }
// };

// int main()
// {
//     Person p1{"Sergei", "Sokolov", 39};
//     p1.personInfo();
//     return 0;
// }

// class Person
// {
// public:
//     string firstName{};
//     string lastName{};
//     int age{};

//     void personInfo()
//     {
//         cout << this->firstName << endl;
//         cout << this->lastName << endl;
//         cout << this->age << endl;
//     }
// };

// int main()
// {
//     Person p1{"Sergei", "Sokolov", 39};
//     p1.personInfo();
//     return 0;
// }

class Book
{
private:
    string name{};

public:
    string author{};
    int year{};
    // Constructor
    Book(string author, int year)
    {
        this->author = author;
        this->year = year;
    }
    // Setter
    void setBookInfo(string name)
    {
        this->name = name;
    }
    // Getter
    string getBookInfo()
    {
        return this->name;
    }
};

int main()
{
    // Instantiate a book
    Book b1{"Author1", 1984};
    cout << b1.author << endl;
    cout << b1.year << endl;
    b1.setBookInfo("Gone with wind");
    cout << b1.getBookInfo() << endl;
    return 0;
}