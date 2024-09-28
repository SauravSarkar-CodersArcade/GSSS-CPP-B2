#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // Setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // getters
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }

};
int main() {
    Employee e1;
    // Calling the setters
    e1.setName("Vineet");
    e1.setAge(40);
    e1.setCompany("Bizotic");
    // Calling the getters
    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Company: " << e1.getCompany() << endl;
    Employee e2 = Employee();
    return 0;
}
