#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // Get user input for filename and ouput a vector to a file
    std::string fileName;
    std::cin >> fileName;
    std::ofstream file(fileName.c_str(), std::ios::app);
    std::vector<std::string> names;
    names.push_back("Sergei Sokolov");
    names.push_back("Julia Sokolova");
    names.push_back("Danja Sokolov");
    // Loop through the vector and ouput the result to names.txt
    for (std::string name : names)
    {
        file << name << std::endl;
    }
    // Close the file
    file.close();
    return 0;
}