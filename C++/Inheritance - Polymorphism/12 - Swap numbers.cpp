#include <iostream>
using namespace std;

class SwapNumbers;

class SwapNumbers {
private:
    int num1;
    int num2;

public:
    
    SwapNumbers(int n1, int n2) : num1(n1), num2(n2) {}

    friend void swapNumbers(SwapNumbers &sn);

    void display() const {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

void swapNumbers(SwapNumbers &sn) {
    sn.num1 = sn.num1 + sn.num2;
    sn.num2 = sn.num1 - sn.num2;
    sn.num1 = sn.num1 - sn.num2;
}

int main() {
    
    SwapNumbers sn(5, 10);

    cout << "Before swapping:" << endl;
    sn.display();

    swapNumbers(sn);

    cout << "\nAfter swapping:" << endl;
    sn.display();

    return 0;
}

