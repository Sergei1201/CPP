#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size);
    return 0;
}