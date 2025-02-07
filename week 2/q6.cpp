// sahal arif 
// 24k-0991


#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNum;
    int marks[3];
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of studen " << i + 1 << ": ";
        cin >> students[i].name;  
        cout << "Enter roll number of student : ";
        cin >> students[i].rollNum;

        cout << "Enter marks of 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; i++) {
        double avg = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3.0;
        cout << "Name: " << students[i].name << ", Roll No: " << students[i].rollNum << ", Average Marks: " << avg << endl;
    }

    delete[] students;
    return 0;
}