#include <iostream>
using namespace std;
    void list_generator(int limit) {
    
    for(int i = 1; i <= limit; i++){
        cout << i << " ";
    }
    cout << "\n";
    
}

int main() {
    int A, B;
    cin >> A >> B;

    list_generator(A);
    list_generator(B);

    
}
