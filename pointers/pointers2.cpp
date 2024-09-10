#include <iostream>
using namespace std;

int main() 
{
    int x = 40;  // Declare and initialize an integer variable
    int *p;      // Declare a pointer to an integer
    p = &x;    // Initialize the pointer with the address of 'num'
    cout << p; // Print the memory location of variable 'x'
    
    return 0;
}