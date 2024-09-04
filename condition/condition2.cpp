#include <bits/stdc++.h>
using namespace std;

int main() {

    int Age;
    cin >> Age;
    int Vage = 18;
    if (Age < Vage) 
    {
        cout << "Not old enough to vote." << endl;
        cout << "Wait for " << (Vage - Age) << " years";
    }
    else
        cout << "Old enough to vote!";

}