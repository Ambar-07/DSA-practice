#include <bits/stdc++.h>

using namespace std;

int main() {

    int r;
    int k;
    cin >> r;
    cin >> k;
    if(r>k) {
        cout << "Ram is heavier than Karan." << endl;
    }
    else if (r<k) {
        cout << "Karan is heavier than Ram" << endl;
    }
    else {
        cout << "Ram & Karan have the same weight!" << endl;
    }
}