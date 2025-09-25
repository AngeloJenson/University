#include <iostream>
using namespace std;
class University {
public:
void showUniversity() {
cout << "University: Crestwood University" << endl;
}
};
class Department : public University {
public:
void showDepartment() {
cout << "Department: Computer Science" << endl;
}
};

class Student : public Department {
public:
void showStudent() {
cout << "Student John Doe" << endl;
}
};

int main() {
Student s1;   
s1.showUniversity();
s1.showDepartment();
s1.showStudent();
return 0;
}

