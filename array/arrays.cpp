#include <iostream>
using namespace std;

int main()
{
    // Calculate the size of an array an output all the elements of that array
    int arr[] = {1, 2, 3, 4, 5, 10, 12, 13, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}