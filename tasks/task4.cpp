// Write out the syntax in the blanks below
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
        int A, B;
        string S;
        //accept 2 integers on the 1st line of each test case
        cin >> A >> B;
        //accept 1 string on the 2nd line of each test case
        cin >> S;
        //output the 2 integers and a string on a single line for each test case 
        cout << A << " " << B << " " << S << endl;
    }
}