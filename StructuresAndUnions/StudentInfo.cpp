#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float marks;
};
void inputStudent(Student& s){
    // Write your code here
    cout << "Enter the name:\n";
    cin >> s.name;
    cout << "Enter the age:\n";
    cin >> s.age;
    cout << "Enter the marks:\n";
    cin >> s.marks;
}
void displayStudent(Student& s){
    // Write your code here
    cout << "Name of the student: " << s.name << endl;
    cout << "Age of the student: " << s.age << endl;
    cout << "Marks of the student: " << s.marks << endl;
}
int main() {
    Student s1;
    inputStudent(s1);
    displayStudent(s1);
    return 0;
}
