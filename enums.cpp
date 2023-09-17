#include <iostream>
using namespace std;

// Creating an enumerators that are inexpensive copies which can be passed and returned by value instead of passing
// them by referehce unlike objects and structs

enum SortOrder
{
    alphabetical,
    alphabeticalReverse,
    numerical,
};

// Create a function that returns a sorting type
string sorting(SortOrder order)
{
    string result;
    switch (order)
    {
    case alphabetical:
        return result = "Alphabetical order";
        break;
    case alphabeticalReverse:
        return result = "Alphabetical reverse order";
        break;
    case numerical:
        return result = "Numerical order";
        break;
    default:
        break;
    }
}

int main()
{
    cout << sorting(numerical) << endl;
}