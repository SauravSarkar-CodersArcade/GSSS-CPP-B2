#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    // Getters & Setters
    void setData(string n, int a){
        name = n;
        age = a;
    }
    void getData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};
int main() {
    Student s;
    string name;
    int age;
    cout << "Enter the name:\n";
    getline(cin, name);
    cout << "Enter the age:\n";
    cin >> age;
    s.setData(name, age);
    s.getData();
    return 0;
}
