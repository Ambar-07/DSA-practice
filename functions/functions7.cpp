#include<iostream>
using namespace std;

    inline int abSquared(int a, int b){
    int value = a * a + 2 * a * b + b * b;
    return value;
    
}
int main(){
    int a, b;
    cin >> a >> b;
    int expression_value = abSquared(a, b);
    cout << expression_value;
    
    return 0;
}