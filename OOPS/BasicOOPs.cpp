#include <iostream>
using namespace std;
class Student {
public:
    // Attributes or Properties
    string name;
    string  email;
    int rollNo;
    // Method
    void studentDetails(){
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
int main() {
    // Syntax 1
    Student s1 = Student();
    s1.name = "Sahana";
    s1.email = "sahana@gmail.com";
    s1.rollNo = 123;
    s1.studentDetails();
    // Syntax 2
    Student s2;
    s2.name = "Ramya";
    s2.email = "ramya@gmail.com";
    s2.rollNo = 124;
    s2.studentDetails();
    return 0;
}
