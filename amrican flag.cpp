#include <iostream>
using namespace std;

int main() {
    int width = 50; 
    int height = width * 6 / 13; // 
    for (int i = 0; i < height / 2; ++i) {
        for (int j = 0; j < width; ++j) {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < height / 2; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i % 2 == 0) {
                cout << " ="; 
            } else {
                cout << ""; 
            }
        }
        cout << endl;
    }

    return 0;
}
