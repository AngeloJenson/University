#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string course;
    int year;
    static int studentCount; 
    
public:
    Student() {
        name = " ";
        rollNo = 0;
        course = "";
        year = 0;
        studentCount++; 
    }

    Student(string n, int r, string c, int y) {
        name = n;
        rollNo = r;
        course = c;
        year = y;
        studentCount++;
    }

    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        course = s.course;
        year = s.year;
        studentCount++;
    }

    static void showStudentCount() { 
        cout << "Total Student objects created: " << studentCount << "\n";
    }

    void registerStudent(string n, string c = "BCA", int y = 1) {
        name = n;
        course = c;
        year = y;
        rollNo = 10; 
        cout << "\nStudent registered using default arguments\n";
        displayStudent();
    }

    void createStudent() {
        cin.ignore();
        cout << "\nEnter Student Name ";
        getline(cin, name);
        cout << "Enter Roll Number ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Course ";
        getline(cin, course);
        cout << "Enter Year of Study ";
        cin >> year;
        cout << "Student record created.\n";
    }

    void updateDetails() {
        if (name.empty()) {
            cout << "\nNo student record found.\n";
            return;
        }
        int choice;
        cout << "\nWhat do you want to update?";
        cout << "\n1. Name\n2. Course\n3. Year\nEnter choice ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                cout << "Enter new name ";
                getline(cin, name);
                break;
            case 2:
                cout << "Enter new course ";
                getline(cin, course);
                break;
            case 3:
                cout << "Enter new year ";
                cin >> year;
                break;
            default:
                cout << "Invalid option\n";
        }
        cout << "Details updated successfully.\n";
    }

    void displayStudent() {
        if (name.empty()) {
            cout << "\nNo student record found.\n";
            return;
        }
        cout << "\n- Student Details -\n";
        cout << "Name " << name << '\n';
        cout << "Roll Number " << rollNo << '\n';
        cout << "Course " << course << '\n';
        cout << "Year " << year << '\n';
    }

    friend void viewStudentInfo(Student s);
};

int Student::studentCount = 0;

void viewStudentInfo(Student s) {
    if (s.name.empty()) {
        cout << "\nNo student record found.\n";
        return;
    }
    cout << "\n Student Info:\n";
    cout << "Name " << s.name << '\n';
    cout << "Roll Number " << s.rollNo << '\n';
    cout << "Course " << s.course << '\n';
    cout << "Year " << s.year << '\n';
}

int main() {
    Student students[5]; 
    int choice, index;

    do {
        cout << "\nUniversity Student Menu"
             << "\n1. Create Student Record"
             << "\n2. Register Using Default Arguments"
             << "\n3. Update Student Details"
             << "\n4. Display Student Info"
             << "\n5. View Info (Friend Function)"
             << "\n6. Show Total Students Created"
             << "\n7. Exit"
             << "\nEnter your choice ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter student index (0-4): ";
            cin >> index;
            if (index < 0 || index > 4) {
                cout << "Invalid \n";
                continue;
            }
        }

        switch (choice) {
            case 1:
                students[index].createStudent();
                break;
            case 2: {
                string name;
                cin.ignore();
                cout << "Enter Name ";
                getline(cin, name);
                students[index].registerStudent(name);
                break;
            }
            case 3:
                students[index].updateDetails();
                break;
            case 4:
                students[index].displayStudent();
                break;
            case 5:
                viewStudentInfo(students[index]);
                break;
            case 6:
                Student::showStudentCount();
                break;
            case 7:
                cout << "Exiting program. Bye\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);
    return 0;
}

