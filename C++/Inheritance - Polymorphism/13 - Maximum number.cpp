#include <iostream>
using namespace std;

class MaxFinder;

class MaxFinder {
private:
    int num1;
    int num2;

public:
    
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(MaxFinder &mf);
};

int findMax(MaxFinder &mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    MaxFinder mf(10, 20);

    cout << "Number 1: " << mf.num1 << endl;
    cout << "Number 2: " << mf.num2 << endl;

    int maxNum = findMax(mf);

    cout << "\nMaximum Number: " << maxNum << endl;

    return 0;
}

