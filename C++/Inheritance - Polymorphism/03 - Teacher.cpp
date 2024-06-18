#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:

    Person(string n, int a) : name(n), age(a) {}

    void readPersonData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPersonData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    double percentage;

public:
    
    Student(string n, int a, double p) : Person(n, a), percentage(p) {}

    void readStudentData() {
        readPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore(); 
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    double salary;

public:
    // Constructor to initialize name, age, and salary
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}

    // Function to read teacher data
    void readTeacherData() {
        readPersonData();
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); 
    }

    void displayTeacherData() const {
        displayPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {

    Student student("John Doe", 20, 85.5);
    Teacher teacher("Jane Smith", 30, 50000.0);

    cout << "Enter details for student:" << endl;
    student.readStudentData();
    cout << "\nStudent Details:" << endl;
    student.displayStudentData();

    cout << "\nEnter details for teacher:" << endl;
    teacher.readTeacherData();
    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacherData();

    return 0;
}

