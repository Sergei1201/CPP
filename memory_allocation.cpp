#include <iostream>
#include <memory>

using namespace std;

int main()
{
    /* Allocating 4 bytes of memory for an integer
        when it allocates memory, it's returning pointer to the memory address
    */
    int *ptr = new int;
    /*
        Allocating memory for an array
    */
    int *point = new int[30]; // allocating 120 bytes of memory for an array
}