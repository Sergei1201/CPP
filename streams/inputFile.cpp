#include <iostream>
#include <vector>
#include <fstream>

int main()
{

    // Create a vector to store info from a file we read informaton from
    std::vector<std::string> people;
    // Open file for reading information
    std::ifstream file("names.txt");
    // Create a variable to store input from the file
    std::string input;
    // Read from the file
    while (file >> input)
    {
        people.push_back(input);
    }
    // Printing information from the file to the console
    for (std::string person : people)
    {
        std::cout << person << std::endl;
    }

    return 0;
}