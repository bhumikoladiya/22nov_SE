#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    bool isIsosceles() const {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    bool isScalene() const {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }

    void displayTriangleType() const {
        if (isEquilateral()) {
            cout << "The triangle is equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "The triangle is isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is scalene." << endl;
        } else {
            cout << "Invalid triangle sides." << endl;
        }
    }
};

int main() {

    Triangle triangle1(3.0, 3.0, 3.0);
    Triangle triangle2(3.0, 4.0, 3.0);
    Triangle triangle3(3.0, 4.0, 5.0);

    cout << "Triangle 1: ";
    triangle1.displayTriangleType();

    cout << "Triangle 2: ";
    triangle2.displayTriangleType();

    cout << "Triangle 3: ";
    triangle3.displayTriangleType();

    return 0;
}

