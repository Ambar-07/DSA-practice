#include <iostream>
using namespace std;

void printValue(int *ptr) {
    if(ptr != nullptr) {
        cout << "Value: " << *ptr << endl;
    } else 
    
    {
        cout<<"Pointer is NULL"<<endl;
    }
}

int main() {
    int *number = nullptr; 
    printValue(number); 
    return 0;
}
