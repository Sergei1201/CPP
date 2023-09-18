#include <iostream>
using namespace std;

int searchArray(int myArr[], int size, int element);

int main()
{
    int numbers[] = {20, 23, 24, 33, 36, 37, 49};
    int searchNum;
    int sizeOfArr = sizeof(numbers) / sizeof(numbers[0]);
    int index;

    cout << "Enter the number you want to find the position for: ";
    cin >> searchNum;

    index = searchArray(numbers, sizeOfArr, searchNum);
    if (index != -1)
    {
        cout << searchNum << " is at the position of " << index << endl;
    }
    else
    {
        cout << searchNum << " is not in the array" << endl;
    }
    return 0;
}

int searchArray(int myArr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (myArr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
