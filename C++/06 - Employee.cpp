#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double initialSalary) {
        name = empName;
        employeeID = empID;
        salary = initialSalary;
    }
    void setSalaryBasedOnPerformance(char performanceRating) {
        switch (performanceRating) {
            case 'A':
                salary *= 1.20;  
                break;
            case 'B':
                salary *= 1.10;  
                break;
            case 'C':
                break;
            case 'D':
                salary *= 0.90;  
                break;
            default:
                cout << "Invalid performance rating!" << endl;
                return;
        }
        cout << "New salary set based on performance rating " << performanceRating << ": " << salary << endl;
    }

    void displayEmployeeInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary:" << salary << endl;
    }
};

int main() {
    
    Employee emp1("John Doe", 12345, 50000.0);
    emp1.displayEmployeeInfo();
    emp1.setSalaryBasedOnPerformance('A');
    emp1.displayEmployeeInfo();
    emp1.setSalaryBasedOnPerformance('C');
    emp1.displayEmployeeInfo();
    emp1.setSalaryBasedOnPerformance('E');

    return 0;
}

