#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
void insertElement(int arr[], int size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position\n";
    return;
    }
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    ++size;
        cout << "Updated array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "<< "\n";;
    } 
}
int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;  
    int element = 10;
    int position = 2;   
    insertElement(arr, size, element, position);
    return 0;
}