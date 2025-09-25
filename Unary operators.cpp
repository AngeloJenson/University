#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int year;  
public:
    Student(string n, int y) {
        name = n;
        year = y;
    }

    void display() {
        cout << " Name " << name << endl;
        cout << "Year of Study " << year << endl;
    }

    void operator++() {
        ++year;
    } 
    void operator--() {
        if (year > 1)   
            --year;
    }
};
int main() {
    Student s1("Gelo", 1);

    cout << "Before Promotion:" << endl;
    s1.display();  

    ++s1;
    cout << "\nAfter Promotion (++):" << endl;
    s1.display();

    --s1;
    cout << "\nAfter Demotion (--):" << endl;
    s1.display();

    return 0;
}

