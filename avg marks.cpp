#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float marks1, marks2, marks3;
    float totalMarks, averageMarks;

    // Input student roll number and marks
    cout << "Enter student roll number: ";
    cin >> rollNo;

    cout << "Enter marks in subject 1: ";
    cin >> marks1;

    cout << "Enter marks in subject 2: ";
    cin >> marks2;

    cout << "Enter marks in subject 3: ";
    cin >> marks3;

    // Calculate total marks
    totalMarks = marks1 + marks2 + marks3;

    // Calculate average marks
    averageMarks = totalMarks / 3.0;

    // Output total and average marks
    cout << "\nStudent Roll Number: " << rollNo << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << averageMarks << endl;

    return 0;
}
