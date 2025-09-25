#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string regNo;
    string name;
    float marks[5]; 
    float average;
public:
    void readData() {
        cout << "Enter register Number ";
        cin >> regNo;
        cin.ignore(); 
        cout << "Enter Name ";
        getline(cin, name);
        cout << "Enter marks for 5 subjects\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        calculateAverage();
    }
    void calculateAverage() {
        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        average = total / 5;
    }
    void addGraceMarks(float grace) {
        for (int i = 0; i < 2; i++) {
            marks[i] += grace;
            if (marks[i] > 100)
                marks[i] = 100;
        }
        calculateAverage();
    }
    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Register Number " << regNo << endl;
        cout << "Name " << name << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Marks for Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Average Marks " << average << endl;
    }
};
int main() {
    Student s;
    s.readData();
    s.displayData();
    cout << "\nAdding grace marks of 2 to each subject...\n";
    s.addGraceMarks(2);
    s.displayData();
    return 0;
}

