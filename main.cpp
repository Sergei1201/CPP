#include <iostream>
using namespace std;

// Get max num function
int getMax(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
// Get the day of the week function
string getDay(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        cout << "Invalid input";
        break;
    }
    return dayName;
}
// Function that powers numbers
int powerNums(int baseNum, int powerNum)
{
    int result = 1;
    for (int i = 0; i < powerNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}

int main()
{
    // POINTERS
    int age = 39;
    int *pAge = &age;
    string name = "User1";
    double profit = 2.5;

    cout << pAge << endl;
    /*
    Comments can be written in here
    */
    // Two dimensional arrays in C++
    // int gridArray[3][2] = {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6}};
    // // Loop through array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << gridArray[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << powerNums(9, 3) << endl;
    // cout << getDay(7) << endl;

    // WHILE LOOP
    // int x = 1;
    // while (x <= 10)
    // {
    //     cout << x << endl;
    //     x++;
    // }
    // // DO WHILE LOOP
    // int y = 10;
    // do
    // {
    //     cout << y << endl;
    //     y++;
    // } while (y <= 5);

    // FOR LOOP
    // int x = 1;
    // while (x <= 10)
    // {
    //     cout << x << endl;
    //     x++;
    // }
    // int nums[] = {10, 2, 35, 36, 77, 98};
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << nums[i] << endl;
    // }

    // Basic guessing numbers game
    // int secretNum = 15;
    // int guessNum;
    // int guessLimit = 5;
    // int guessCount = 0;
    // bool outOfGuesses = false;

    // while (secretNum != guessNum && !outOfGuesses)
    // {
    //     if (guessCount <= guessLimit)
    //     {
    //         cout << "Enter a guess number: ";
    //         cin >> guessNum;
    //         guessCount++;
    //     }
    //     else
    //     {
    //         outOfGuesses = true;
    //     }
    // }
    // if (outOfGuesses)
    // {
    //     cout << "You have lost the game " << endl;
    // }
    // else
    // {
    //     cout << "You have won the game" << endl;
    // }

    // Basic calculator
    // int firstNum, secondNum;
    // char op;
    // int result;
    // // Give a prompt for the user
    // cout << "Enter the first number: ";
    // cin >> firstNum;
    // cout << "Enter the second number: ";
    // cin >> secondNum;
    // cout << "Enter an operator: ";
    // cin >> op;
    // if (op == '+')
    // {
    //     result = firstNum + secondNum;
    // }
    // else if (op == '-')
    // {
    //     result = firstNum - secondNum;
    // }
    // else if (op == '*')
    // {
    //     result = firstNum * secondNum;
    // }
    // else if (op == '/')
    // {
    //     result = firstNum / secondNum;
    // }
    // else
    // {
    //     cout << "Invalid operator ";
    // }

    // cout << result << endl;

    // SWITCH

    // Check for the operator

    // cout << getMax(10, 11, 33) << endl;
    // cout << getMax(39, 22, 35) << endl;

    // Declaring variables
    // string characterName = "Sergei";
    // int characterAge;
    // char grade = 'A';
    // string name = "Name";
    // int age = 35;
    // float x = 2.5;
    // double y;
    // characterAge = 39;
    // bool isMale = true;
    // bool isFemale = false;
    // string firstName = "Sergei";
    // string lastName = "Sokolov";
    // string person = "Sergei Sokolov";
    // lastName[6] = 'w';
    // // Using variables

    // // String methods
    // // Find returns the position of searched text in a string
    // cout << person.find("Sokolov", 0) << endl;
    // // Substring
    // cout << person.substr(7, 5) << endl;
    // // Length returns the length of a string
    // cout << firstName.length() << endl;
    // cout << lastName << endl;
    // // Returns a character at a certain position of a string
    // cout << firstName[0] << endl;
    // cout << lastName.length() << endl;
    // cout << age << endl;
    // cout << "There was a man named " << characterName << endl;
    // cout << characterName << " liked programming languages, such as C++, PHP, JavaScript, and Python" << endl;
    // cout << characterName << " also liked using databases, such as MySQL and MongoDB, but did not like being " << characterAge << endl;
    return 0;
}