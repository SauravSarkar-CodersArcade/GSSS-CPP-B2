#include <iostream>
#include <string.h>
using namespace std;
union Employee {
    char name[20];
    int age;
    int empID;
};
int main() {
    union Employee e1;
    strcpy(e1.name, "Sahana");
    cout << "Name: " << e1.name << endl;
    e1.age = 30;
    cout << "Age: " << e1.age << endl;
    e1.empID = 101;
    cout << "Emp ID: " << e1.empID << endl;
    cout << "Size of union is " << sizeof(e1) << " Bytes." << endl;
    return 0;
}
