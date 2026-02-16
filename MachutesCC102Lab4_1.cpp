#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int numStudents, numQuizzes;

    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of quizzes: ";
    cin >> numQuizzes;

    int scores[numStudents][numQuizzes];

    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " scores: ";
        for (int j = 0; j < numQuizzes; j++) {
            cin >> scores[i][j];
        }
    }

    cout << "\nStudent\t";
    for (int j = 1; j <= numQuizzes; j++) cout << "Q" << j << "\t";
    cout << "Average" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < numStudents; i++) {
        double sum = 0;
        cout << i + 1 << "\t";

        for (int j = 0; j < numQuizzes; j++) {
            cout << scores[i][j] << "\t";
            sum += scores[i][j];
        }

        double average = sum / numQuizzes;
        cout << fixed << setprecision(2) << average << endl;
    }

    return 0;
}
