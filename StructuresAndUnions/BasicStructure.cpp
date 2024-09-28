#include <iostream>
#include <string.h>
using namespace std;
struct Employee {
    char name[20];
    int age;
    int empID;
};
int main() {
    struct Employee e1;
    strcpy(e1.name, "Sahana");
    e1.age = 30;
    e1.empID = 101;
    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Emp ID: " << e1.empID << endl;
    cout << "Size of struct is " << sizeof(e1) << " Bytes." << endl;
    return 0;
}
