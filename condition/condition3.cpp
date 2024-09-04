#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cin >> age;
    int voting_age = 18;
    
    if (age >= voting_age) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote.";
    }
}
