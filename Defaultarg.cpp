#include <iostream>
using namespace std;
void registerStudent(string name, string course = "BCA", int year = 1) {
    cout << "Student Name " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Year " << year << endl;
    cout << "--------" << endl;
}
int main() {
    registerStudent("Anjali", "B.Tech", 3);
    registerStudent("Mohit");
    registerStudent("Rekha", "M.Sc");
    return 0;
}

