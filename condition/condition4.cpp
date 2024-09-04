#include <bits/stdc++.h>
using namespace std;

int main() {

  int r;
  int b;
  cin >> r >> b;
  if (r>b) {
    cout << "Rob Scored higher marks than Bob" << endl;
  } else if (r==b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
}