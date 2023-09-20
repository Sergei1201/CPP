#include <iostream>
#include <array>
#include <vector>

int main()
{
    // Standard array
    int arr[] = {1, 2, 3, 4, 5, 70};
    // Range based for loop
    for (int n : arr)
    {
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    // Using range based for loop for vectors (similar to forEach in other programming languages)
    std::vector<int> numbers{1, 2, 3, 4, 5, 70, 100};
    for (int n : numbers)
    {
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    // Standard for loop
    /*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl; */
    return 0;
}