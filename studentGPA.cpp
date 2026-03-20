#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
int studentID;
string name;
string course;
float gpa;
};

void inputStudent(Student students[], int numStudents){
    for (int i = 0; i < numStudents; i++){
        cout << "==== Student " << i + 1 << " ====" << endl;

        int tempID;
        bool isDuplicate;
        do {
            isDuplicate = false;
            cout << "Student ID: ";
            cin >> tempID;
            for (int j = 0; j < numStudents; j++){
                if (students[j].studentID == tempID){
                    cout << "ID already exists! Try again." << endl;
                    isDuplicate = true;
                    break;
                }
            }
        }while (isDuplicate);

        students[i].studentID = tempID;
        cin.ignore();

        cout << "Enter name: ";
        getline (cin, students[i].name);
        cout << "Enter course: ";
        getline(cin, students[i].course);
        cout << "GPA: ";
        cin >> students[i].gpa;
    }
}

string displayRemarks(float gpa){
    if (gpa >= 90.0 && gpa <= 100){
        return "Excellent";
    }
    else if (gpa >= 80.0 && gpa <= 89.99){
        return "Very Good";
    }
    else if (gpa >= 70.0 && gpa <= 79.99){
        return "Good";
    }
    else if (gpa >= 60.0 && gpa <= 69.99){
        return "Passing";
    }
    else
        return "Failed";

}

void outputStudents(Student students[], int numStudents){
    cout << "\n" << left << setw(15) << "Student ID"
    << setw(20) << "Name" << setw(15) << "Course"
    << setw(10) << "GPA" << "Remarks" << endl;
    for (int i = 0; i < 10; i++){
        cout << "-------";
    }
    cout << endl;
    for (int i = 0; i < numStudents; i++){
        cout << left << setw(15) << students[i].studentID << setw(20)
        << students[i].name << setw(15)
        << students[i].course << fixed
        << setprecision(2) << setw(10) << students[i].gpa
        << displayRemarks(students[i].gpa) << endl;
    }
        for (int i = 0; i < 10; i++){
        cout << "-------";
    }
}

int main() {
char choice;
do{
system("cls");
int numStudents;

cout << "Enter how many students: ";
cin >> numStudents;
cin.ignore();

Student students[numStudents];

inputStudent(students, numStudents);
outputStudents(students, numStudents);

cout << "\nWould you like to repeat? ";
cin >> choice;

}while(tolower(choice) == 'y');

cout << "\nClosing program....";
return 0;
}
