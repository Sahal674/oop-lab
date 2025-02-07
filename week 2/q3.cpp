// sahal arif
// 24k-0991

#include <iostream>
using namespace std;

struct Employee {
    string name;
    int workedHours;
    double hourlyRate;
};

int main() {
    int n;
    cout << "Enter number of employes: ";
    cin >> n;

    Employee* employees = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of employe " << i + 1 << ": ";
        cin >> employees[i].name;  
        cout << "Enter hours worked: ";
        cin >> employees[i].workedHours;
        cout << "Enter hourly rate: ";
        cin >> employees[i].hourlyRate;
    }

    cout << "\nEmployee Salaries:\n";
    for (int i = 0; i < n; i++) {
        double totalSalary = employees[i].workedHours * employees[i].hourlyRate;
        cout << "Name: " << employees[i].name << ", Salary: $" << totalSalary << endl;
    }

    delete[] employees;
    return 0;
}