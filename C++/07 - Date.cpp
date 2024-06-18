#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    int daysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

public:
    
    Date(int d, int m, int y) {
        setDate(d, m, y);
    }

    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date. Date not set." << endl;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate(int d, int m, int y) const {
        if (y < 1 || m < 1 || m > 12 || d < 1 || d > daysInMonth(m, y)) {
            return false;
        }
        return true;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {

    Date date1(15, 6, 2023);
    date1.displayDate();
    date1.setDate(29, 2, 2024);
    date1.displayDate();
    date1.setDate(30, 2, 2023);  
    date1.displayDate();
    date1.setDate(31, 4, 2023); 
    date1.displayDate();

    return 0;
}

