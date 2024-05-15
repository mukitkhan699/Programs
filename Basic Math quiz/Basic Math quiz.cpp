#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generator

    int score = 0;
    int totalQuestions = 5; // Number of questions to ask

    cout << "Welcome to the Math Quiz!" << endl;
    cout << "You will be asked " << totalQuestions << " math questions." << endl;

    for (int i = 0; i < totalQuestions; ++i) {
        // Generate two random numbers between 1 and 20
        int num1 = rand() % 20 + 1;
        int num2 = rand() % 20 + 1;

        // Ask the user to solve the math problem
        cout << "\nQuestion " << (i + 1) << ": What is " << num1 << " + " << num2 << "?" << endl;
        int userAnswer;
        cout << "Your answer: ";
        cin >> userAnswer;

        // Check if the user's answer is correct
        int correctAnswer = num1 + num2;
        if (userAnswer == correctAnswer) {
            cout << "Correct! Good job!" << endl;
            score++;
        }
        else {
            cout << "Incorrect! The correct answer is " << correctAnswer << "." << endl;
        }
    }

    // Display the user's score
    cout << "\nQuiz Complete!" << endl;
    cout << "You scored " << score << " out of " << totalQuestions << " questions." << endl;

    return 0;
}