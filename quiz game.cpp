#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "=== C++ QUIZ GAME ===\n\n";

    cout << "1. Which language is used for system programming?\n";
    cout << "1. HTML\n2. C++\n3. CSS\n4. SQL\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is C++.\n\n";
    }

    cout << "2. Which symbol is used to end a C++ statement?\n";
    cout << "1. :\n2. ;\n3. ,\n4. #\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is ;\n\n";
    }

    cout << "3. Which keyword is used to create an object?\n";
    cout << "1. new\n2. create\n3. object\n4. class\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is new.\n\n";
    }

    cout << "=== QUIZ COMPLETE ===\n";
    cout << "Your score: " << score << "/3\n";

    return 0;
}