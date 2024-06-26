#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    cout << "Sum of even integers: " << sumEven << endl;
    cout << "Sum of odd integers: " << sumOdd << endl;

    return 0;
}
