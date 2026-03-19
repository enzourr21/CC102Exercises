#include <iostream>
using namespace std;

struct Student {
int studentID;
string name;
string course;
float gpa;
};

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

int main() {
char choice;
do{
system("cls");
int numStudents;

cout << "Enter how many students: ";
cin >> numStudents;
cin.ignore();

Student students[numStudents];

    //store
    for (int i = 0; i < numStudents; i++){
        cout << "\nStudent ID: ";
        cin >> students[i].studentID;
        cin.ignore();
        cout << "Enter name: ";
        getline (cin, students[i].name);
        cout << "Enter course: ";
        getline (cin, students[i].course);
        cout << "GPA: ";
        cin >> students[i].gpa;
    }

    //output
    cout << "\nStudent ID\t" << "Name\t" << "\tCourse \t" << "\tGPA\t" <<"Remarks\n";
    for (int i = 0; i < 8; i++){
        cout << "--------";
    }
    cout << endl;
    for (int i = 0; i < numStudents; i++){
        cout << students[i].studentID << "\t\t"
        << students[i].name << "\t\t"
        << students[i].course << "\t\t"
        << students[i].gpa << "\t"
        << displayRemarks(students[i].gpa) << endl;
    }
    for (int i = 0; i < 8; i++){
        cout << "--------";
    }

cout << "\nWould you like to repeat? ";
cin >> choice;

}while(tolower(choice) == 'y');

cout << "Closing program....";
return 0;
}
