#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    
    void inputPersonData() {
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

class Academic {
protected:
    int mathMarks;
    int scienceMarks;
    int englishMarks;

public:
    
    void inputAcademicData() {
        cout << "Enter marks for Math: ";
        cin >> mathMarks;
        cout << "Enter marks for Science: ";
        cin >> scienceMarks;
        cout << "Enter marks for English: ";
        cin >> englishMarks;
        cin.ignore(); 
    }

    void displayAcademicData() const {
        cout << "Math Marks: " << mathMarks << endl;
        cout << "Science Marks: " << scienceMarks << endl;
        cout << "English Marks: " << englishMarks << endl;
    }

    int totalMarks() const {
        return mathMarks + scienceMarks + englishMarks;
    }

    double percentage() const {
        return (static_cast<double>(totalMarks()) / 300) * 100;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    
    void inputSportsData() {
        cout << "Enter marks for Sports: ";
        cin >> sportsMarks;
        cin.ignore(); 
    }

    void displaySportsData() const {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Student : public Person, public Academic, public Sports {
public:
    void inputStudentData() {
        inputPersonData();
        inputAcademicData();
        inputSportsData();
    }

    void displayStudentData() const {
        displayPersonData();
        displayAcademicData();
        displaySportsData();
        cout << "Total Marks: " << totalMarks() + sportsMarks << endl;
        cout << "Percentage: " << percentage() << "%" << endl;
    }
};

int main() {
    Student student;
    cout << "Enter details for student:" << endl;
    student.inputStudentData();
    cout << "\nStudent Mark Sheet:" << endl;
    student.displayStudentData();

    return 0;
}

