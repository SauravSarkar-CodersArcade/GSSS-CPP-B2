#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student {
    string  name;
    int age;
    float marks;
};
bool compareStudents(const Student &a, const Student &b){
    if (a.marks == b.marks){
        return a.name < b.name; // If marks are same, sort by name (alphabetical)
    }
    return a.marks > b.marks; // Sort by marks (Descending);
}
void displayStudent(const vector<Student> &students){
    for (const Student &s : students){
        cout << "Name: " << s.name << " Age: " << s.age << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of students:\n";
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter name, age and marks of the student: " << i+1 << ": ";
        cin >> students[i].name >> students[i].age >> students[i].marks;
    }
    sort(students.begin(), students.end(), compareStudents);
    displayStudent(students);
    return 0;
}
