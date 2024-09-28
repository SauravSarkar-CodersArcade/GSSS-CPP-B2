#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
class Lecturer : public Employee {
public:
    string Subject;
    Lecturer(string name, int age, string company, string subject)
    : Employee(name, age, company){
        Subject = subject;
    }
    void task(){
        cout << Name << " teaches " << Subject << endl;
    }
};
class SoftwareDeveloper : public Employee{
public:
    string  FavProLang;
    SoftwareDeveloper(string name, int age, string company, string favProLang)
    : Employee(name, age, company){
        FavProLang = favProLang;
    }
    void project(){
        cout << Name << " is working on a " << FavProLang << " project." << endl;
    }
};
int main() {
    Lecturer l1("Raman", 34, "MIT", "Maths");
    l1.employeeDetails();
    l1.task();
    SoftwareDeveloper s1("Samar", 32, "TCS", "Python");
    s1.employeeDetails();
    s1.project();
    return 0;
}
