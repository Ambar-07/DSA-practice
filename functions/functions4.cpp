#include <iostream>
using namespace std;

void computeValue(int a, int b) {
    int c = a*a + 2 * a * b + b*b;
    int d = a+b;
    cout << c << endl;
    cout << d << endl;
}

int main() {
    int t = 3;
    for (int i = 0; i < t; i++) {
        int A, B;
        cin >> A >> B;
        computeValue(A, B);
    }
    
}