#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

// Function to calculate GPA based on percentage
double calculateGPA(double percentage) {
    if (percentage >= 90) {
        return 4.0; // A+
    }
    else if (percentage >= 85) {
        return 3.7; // A
    }
    else if (percentage >= 80) {
        return 3.5; // A-
    }
    else if (percentage >= 75) {
        return 3.2; // B+
    }
    else if (percentage >= 70) {
        return 3.0; // B
    }
    else if (percentage >= 65) {
        return 2.7; // B-
    }
    else if (percentage >= 60) {
        return 2.5; // C+
    }
    else if (percentage >= 55) {
        return 2.2; // C
    }
    else if (percentage >= 50) {
        return 2.0; // C-
    }
    else if (percentage >= 45) {
        return 1.7; // D+
    }
    else if (percentage >= 40) {
        return 1.0; // D
    }
    else {
        return 0.0; // F
    }
}

int main() {
    int marks1, marks2, marks3;
    double totalMarks, percentage;

    // Input marks for three subjects
    cout << "Enter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    // Calculate total marks and percentage
    totalMarks = marks1 + marks2 + marks3;
    percentage = (totalMarks / 300) * 100;

    // Calculate GPA
    double gpa = calculateGPA(percentage);

    // Display result
    cout << "\nTotal Marks: " << totalMarks << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;

    return 0;
}
