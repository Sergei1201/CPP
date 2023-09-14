#include <iostream>
using namespace std;

void passByValue(int num1);
void passByReference(int *num2);

int main()
{
    int num1 = 35;
    int num2 = 42;
    passByValue(num1);
    passByReference(&num2);

    cout << num1 << endl;
    cout << num2 << endl;
    // Passing pointers to functions as arguments

    // int var1{5};
    // int *ptr{&var1};
    // cout << ptr << endl;
    // cout << *ptr << endl;
    return 0;
}

void passByValue(int num1)
{
    num1 = 50;
}

void passByReference(int *num2)
{
    *num2 = 79;
}