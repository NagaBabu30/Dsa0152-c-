#include <iostream>
using namespace std;
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char digit : binary) {
        decimal = decimal * 2 + (digit - '0');
    }
    return decimal;
}
int main() {
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal representation: " << decimalNumber << endl;

    return 0;
}

