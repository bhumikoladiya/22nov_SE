#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() const = 0;
};

class Rectangle : public Shape {
public:
 
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return width * height;
    }

    void displayArea() const {
        cout << "Area of Rectangle: " << area() << endl;
    }
};

int main() {
   
    Rectangle rect(5.0, 3.0);
    rect.displayArea();

    return 0;
}

