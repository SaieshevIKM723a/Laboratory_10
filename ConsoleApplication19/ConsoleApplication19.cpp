#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee {
    string lastName;
    int employeeNumber;
    int birthMonth;

    void printInfo() const {
        cout << "Last name: " << lastName << ", Number: " << employeeNumber << ", Month of birthday: " << birthMonth << endl;
    }
};

int main() {
    const int numEmployees = 3; 

    vector<Employee> employees = {
        {"Kennedy", 1, 5},
        {"Clinton", 2, 7},
        {"Nixon", 3, 9}
    };

    cout << "Full list of employees: " << endl;
    for (const auto& employee : employees) {
        employee.printInfo();
    }

    int requestedMonth;
    cout << "\nEnter the month number to display employees born in this month (1-12): ";
    cin >> requestedMonth;

    cout << "\nEmployees who were born in the month " << requestedMonth << ":" << endl;
    for (const auto& employee : employees) {
        if (employee.birthMonth == requestedMonth) {
            employee.printInfo();
        }
    }

    return 0;
}
