#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double X = 53.56;
    double Y = 3;
    int A = 45;
    int B = 20;
   
    // Output the absolute value of the difference of A and B
    cout << abs(A - B) << "\n";

    // Output the remainder when A is divided by B
    cout << A % B << "\n";

    //computing the rounded off number upwards to its nearest integer and printing it
    cout << ceil(X) << "\n";
   
    //computing the rounded off number downwards to its nearest integer and printing it
    cout << floor(X) << "\n";

    //computing the value of X to the power of Y and printing it
    cout << pow(X,Y) << "\n";

    
}