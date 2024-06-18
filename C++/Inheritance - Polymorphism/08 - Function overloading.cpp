#include <iostream>
using namespace std;

int mathOperation(int a, int b) {
    return a + b;
}

double mathOperation(double a, double b) {
    return a + b;
}

int mathOperation(int a, int b, int c) {
    return a - b - c;
}

int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}

double mathOperation(double a, double b, double c) {
    return a / b / c;
}

int main() {
    int intResult1 = mathOperation(10, 5);
    double doubleResult1 = mathOperation(10.5, 5.2);
    int intResult2 = mathOperation(20, 5, 3);
    int intResult3 = mathOperation(2, 3, 4, 5);
    double doubleResult2 = mathOperation(100.0, 5.0, 2.0);

    cout << "Integer Addition Result: " << intResult1 << endl;
    cout << "Double Addition Result: " << doubleResult1 << endl;
    cout << "Integer Subtraction Result: " << intResult2 << endl;
    cout << "Integer Multiplication Result: " << intResult3 << endl;
    cout << "Double Division Result: " << doubleResult2 << endl;

    return 0;
}

