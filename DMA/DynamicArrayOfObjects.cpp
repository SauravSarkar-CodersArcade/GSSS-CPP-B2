#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n = "unknown", int a = 0) : name(n), age(a){}
    void setData(string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout << "Name: " << name << " Age: " << age << " years." << endl;
    }
};
int main() {
    int num;
    cout << "Enter the size of the array of Objects:\n";
    cin >> num;
    // Array of Objects
    Person* persons = new Person[num];
    cout << "Array Of Objects:\n";
    for (int i = 0; i < num; ++i) {
        string name;
        int age;
        cout << "Enter the name & age of the person\n";
        cin >> name >> age;
        persons[i].setData(name, age);
    }
    cout << "\nDisplay the array of Persons:\n";
    for (int i = 0; i < num; ++i) {
        persons[i].display();
    }
    // De-allocation
    delete[] persons;
    return 0;
}
