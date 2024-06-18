#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:

    Students(int roll) : rollNumber(roll) {}

    void displayRollNumber() const {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students {
protected:
    int marksSubject1;
    int marksSubject2;

public:
   
    Test(int roll, int m1, int m2) : Students(roll), marksSubject1(m1), marksSubject2(m2) {}

    void displayTestMarks() const {
        displayRollNumber();
        cout << "Marks in Subject 1: " << marksSubject1 << endl;
        cout << "Marks in Subject 2: " << marksSubject2 << endl;
    }
};

class Result : public Test {
private:
    int totalMarks;

public:
   
    Result(int roll, int m1, int m2) : Test(roll, m1, m2) {
        totalMarks = m1 + m2;
    }

    void displayResult() const {
        displayTestMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult(101, 85, 90);
    cout << "Student's Result:" << endl;
    studentResult.displayResult();

    return 0;
}

