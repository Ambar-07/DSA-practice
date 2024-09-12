//Update the '_' in the code below
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    //accept the count of test cases given in the the 1st line
    cin >> t;
    //Run a loop to accept 't' inputs
    while (t--)
    {
        string S, X;
        cin >> S;
        //Store the value of string S concatenated with itself to variable X
        X = S + S;
        cout << X << endl;
    }
}