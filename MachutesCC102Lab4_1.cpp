#include <iostream>
using namespace std;

int main(){
int students, average;
int score1, score2, score3;

cout << "How many students? ";
cin >> students;

    for (int i = 0; i < students; i++){
        cout << "\nStudent#" << i + 1 << endl;
        cout << "Quiz 1: ";
        cin >> score1;
        cout << "Quiz 2: ";
        cin >> score2;
        cout << "Quiz 3: ";
        cin >> score3;

        average = (score1 + score2 + score3) / 3;
        cout << "Average: " << average << endl;
    }

return 0;
}
