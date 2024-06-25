#include <iostream>
using namespace std;

int main() {
    cout << "Numbers between 50 and 100 divisible by 11:" << endl;
    
    for (int i = 50; i <= 100; ++i) {
        if (i % 11 == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
