#include <iostream>
using namespace std;
class Student {
public:
    // Attributes or Properties
    string name;
    string  email;
    int rollNo;
    // Method
    Student(string name, string email, int rollNo){
        this->name = name;
        this->email = email;
        this->rollNo = rollNo;
    }
    void studentDetails(){
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Roll No: " << rollNo << endl;
    }
    ~Student(){
        cout << "Object Destroyed.." << endl;
    }
};
int main() {
    // Syntax 1
    Student s1 = Student("Sahana", "sahana@gmail.com", 123);
    s1.studentDetails();
    // Syntax 2
    Student s2("Ramya", "ramya@gmail.com", 124);
    s2.studentDetails();
    return 0;
}
