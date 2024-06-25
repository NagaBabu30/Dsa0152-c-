#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int arr[] = {5, 9, 8, 1, 3};
    sort(begin(arr), end(arr));
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
