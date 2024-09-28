#include <iostream>
using namespace std;
class AbstractEmployee {
    // Interface -> Behaviour
    virtual void checkPromotion() = 0; // Pure Virtual Function
};
class Employee : AbstractEmployee{
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
    virtual void work(){
        cout << Name << " checks mails, prepares reports, attends meetings."
             << endl;
    }
    void checkPromotion(){
        if (Age > 30){
            cout << Name << " is promoted..!!" << endl;
        } else{
            cout << Name << " is not promoted..!!" << endl;
        }
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
//    void work() override {
//        cout << Name << " gives lecture on " << Subject << endl;
//    }
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
//    void work() override {
//        cout << Name << " develops apps using " << FavProLang << endl;
//    }
};
int main() {
    Lecturer l1("Raman", 34, "MIT", "Maths");
//    l1.employeeDetails();
//    l1.task();
//    l1.work();
    SoftwareDeveloper s1("Samar", 23, "TCS", "Python");
//    s1.employeeDetails();
//    s1.project();
//    s1.work();

    // What is the most important use of Polymorphism ?
    // We can use a parent class pointer to access child class objects
    // virtual keyword helps in method overriding
    // Lecturer => Employee
    // SoftwareDeveloper => Employee
    Employee * e1 = &l1;
    Employee * e2 = &s1;
    e1->work();
    e2->work();
    e1->checkPromotion();
    e2->checkPromotion();
    return 0;
}
