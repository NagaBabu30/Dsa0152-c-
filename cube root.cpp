#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double cubeRoot = cbrt(number);
    cout << "Cube root of number is :"<< cubeRoot << endl;

    return 0;
}
