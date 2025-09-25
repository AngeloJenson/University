#include <iostream>
#include <string>
using namespace std;
void addStudent(int id, string name) {
    cout << "Student Added \n";
    cout << "ID " << id << ", Name " << name << endl;
}
void addStudent(int id, string name, string course) {
    cout << "Student Added\n";
    cout << "ID " << id << ", Name " << name << ", Course " << course << endl;
}
void addStudent(int id, string name, string course, int year) {
    cout << "Student Added\n";
    cout << "ID: " << id << ", Name: " << name 
         << ", Course " << course << ", Year " << year << endl;
}
int main() {
    addStudent(101, "Alex");
    addStudent(102, "Sam", "BCA");
    addStudent(103, "Charles", "BSc CS", 2);
    return 0;
}

