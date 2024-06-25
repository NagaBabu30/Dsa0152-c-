#include <iostream>

using namespace std;

int main() {
    // Print the header for the truth table
    cout << "X Y Z | XY + Z" << endl;
    cout << "--------------" << endl;

    // Loop through all possible values of X, Y, and Z (0 or 1)
    for (int X = 0; X <= 1; ++X) {
        for (int Y = 0; Y <= 1; ++Y) {
            for (int Z = 0; Z <= 1; ++Z) {
                // Calculate XY + Z
                int result = (X * Y) + Z;
                // Since it's a boolean expression, result should be either 0 or 1
                if (result > 1) result = 1;
                // Print the current values of X, Y, Z and the result
                cout << X << " " << Y << " " << Z << " |   " << result << endl;
            }
        }
    }

    return 0;
}
