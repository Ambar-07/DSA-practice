/*Task
Write a program that takes three user inputs: a, b, and r, representing the side length of a square, the side length of a cube, and the radius of a circle, respectively.
Create three overloaded functions to calculate the surface area of the square, the surface area of the cube, and the area of the circle.
Use these functions to print the area of the square, the surface area of the cube, and the area of the circle on three separate lines.
Sample 1:
Input
Output
2 3 7
4
54
153.938*/

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Overloaded function to calculate the surface area of a cube
int area(int side, bool isCube) {
    if (isCube) {
        return 6 * side * side;
    }
    return 0;
}

// Overloaded function to calculate the area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int a, b;
    double r;

    cin >> a;

    cin >> b;

    cin >> r;

    cout << area(a) << endl;
    cout << area(b, true) << endl;
    cout << area(r) << endl;

    return 0;
}