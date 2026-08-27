#include <iostream>
using namespace std;

int main() {
    int subjects;
    double marks, total = 0, percentage;

    cout << "=== STUDENT GRADE CALCULATOR ===\n";

    cout << "Enter number of subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;

        total += marks;
    }

    percentage = total / subjects;

    cout << "\nTotal Marks: " << total;
    cout << "\nAverage Percentage: " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade: A+";
    else if (percentage >= 80)
        cout << "\nGrade: A";
    else if (percentage >= 70)
        cout << "\nGrade: B";
    else if (percentage >= 60)
        cout << "\nGrade: C";
    else if (percentage >= 50)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: F";

    return 0;
}