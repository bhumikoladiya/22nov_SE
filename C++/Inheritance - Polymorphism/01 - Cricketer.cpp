#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
    string country;

public:
   
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        getline(cin, name);
        cout << "Enter cricketer's age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter cricketer's country: ";
        getline(cin, country);
    }

    void displayCricketerData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;
    int matchesPlayed;

public:

    void inputBatsmanData() {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        if (matchesPlayed > 0) {
            averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
        } else {
            averageRuns = 0.0;
        }
    }

    void displayBatsmanData() const {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.displayBatsmanData();

    return 0;
}

