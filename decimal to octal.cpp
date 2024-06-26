#include <iostream>
using namespace std;
int main() {
    int decimal, remainder;
    string octal = "";
    cout << "Enter a decimal number: ";
    cin >> decimal;
    while (decimal > 0) {
        remainder = decimal % 8;
        octal = to_string(remainder) + octal;  
        decimal /= 8;
    }
    cout << "The octal is: " << octal << endl;
    return 0;
}