#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:

    Address(string st, string c, string s, string z) {
        street = st;
        city = c;
        state = s;
        zipCode = z;
    }

    void displayAddress() const {
        cout << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address address;
    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

public:
    Student(string n, string c, int r, double m, Address a) : address(a) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: ";
        address.displayAddress();
    }
};

int main() {
   
    Address addr1("123 Main St", "Springfield", "IL", "62701");
    Student student1("John Doe", "10th Grade", 25, 85.5, addr1);
    student1.displayStudentInfo();

    return 0;
}

