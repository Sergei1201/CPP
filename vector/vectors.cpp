#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &data)
{
    data.push_back(39);
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int main()

{
    // Passing vectors into functions as arguments
    vector<int> data{1, 2, 3, 4, 5, 25};
    printVector(data);
    printVector(data);

    // vector<int> numbers{1, 2, 3, 4, 5, 30};
    // numbers.push_back(50);
    // cout << numbers[numbers.size() - 1] << endl;
    // // Print all elements of the vector
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }
    // numbers.pop_back();
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }
    //     // Define a vector in C++
    //     vector<int> numbers{1, 2, 3, 4, 5};
    //     // Push elements into the vector
    //     numbers.push_back(30);
    //     // Accessing elements of the vector
    //     for (int i = 0; i < size(numbers); i++)
    //     {
    //         cout << numbers[i] << " ";
    //     }
    return 0;
}