#include <iostream>
#include <cmath>
using namespace std;
double calculateTriangleArea(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}
int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    double area = calculateTriangleArea(side1, side2, side3);
    cout << "Area of the triangle is: " << area << endl;

    return 0;
}
