#include <iostream>
#include <iomanip>

using namespace std;

void gradeFunction(int *grd, int students, int subjects){
int highest = *grd;

    for (int i = 0; i < students; i++){
        double total = 0;
        cout << "Student " << i + 1 << "\t";
        for (int j = 0; j < subjects; j++){
            int currentGrd = *(grd + (i * subjects) + j);

            cout << currentGrd << "\t";
            total += currentGrd;

            if (currentGrd > highest){
                highest = currentGrd;
            }
        }
        cout << fixed << setprecision(2) <<  "Avg: " << total / subjects << endl;
    }
    for (int i = 0; i < subjects + 3; i++){
        cout << "---------";
    }
    cout << "\nHighest Grade in the matrix: " << highest << endl;
}

int main(){
int students, subjects;

cout << "Enter the number of students: ";
cin >> students;
cout << "Number of subjects: ";
cin >> subjects;

int grades[students][subjects];

//input
for (int i = 0; i < students; i++){
    for (int j = 0; j < subjects; j++){
        cout << "Student[" << i + 1 << "] Subject[" << j + 1 << "]: ";
        cin >> grades[i][j];
    }
}

cout << endl;

//output
for (int i = 0; i < subjects + 3; i++){
    cout << "---------";
}
cout << endl;
gradeFunction((int *)grades, students, subjects);

return 0;
}
