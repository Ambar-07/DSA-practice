#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void displayScopes() {
    // Local variable
    int localVar = 20;
    
    cout << localVar << endl;  
    cout << globalVar << endl; 
}

int main() {
    displayScopes();
    
    
}