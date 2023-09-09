#include <iostream>
using namespace std;

int main()
{ // Declaring variables
    string characterName = "Sergei";
    int characterAge;
    char grade = 'A';
    string name = "Name";
    int age = 35;
    float x = 2.5;
    double y;
    characterAge = 39;
    bool isMale = true;
    bool isFemale = false;
    string firstName = "Sergei";
    string lastName = "Sokolov";
    string person = "Sergei Sokolov";
    lastName[6] = 'w';
    // Using variables

    // String methods
    // Find returns the position of searched text in a string
    cout << person.find("Sokolov", 0) << endl;
    // Substring
    cout << person.substr(7, 5) << endl;
    // Length returns the length of a string
    cout << firstName.length() << endl;
    cout << lastName << endl;
    // Returns a character at a certain position of a string
    cout << firstName[0] << endl;
    cout << lastName.length() << endl;
    cout << age << endl;
    cout << "There was a man named " << characterName << endl;
    cout << characterName << " liked programming languages, such as C++, PHP, JavaScript, and Python" << endl;
    cout << characterName << " also liked using databases, such as MySQL and MongoDB, but did not like being " << characterAge << endl;
    return 0;
}