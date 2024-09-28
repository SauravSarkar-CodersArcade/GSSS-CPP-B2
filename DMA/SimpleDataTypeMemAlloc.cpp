#include <iostream>
using namespace std;
int main() {
    // Memory allocation
    int * intPtr = new int;
    char * charPtr = new char;
    string * strPtr = new string;

    // Assigning values
    *intPtr = 20;
    *charPtr = 'A';
    *strPtr = "GSSSIETW";

    // Display by de-referencing
    cout << "Integer: " << *intPtr << endl;
    cout << "Character: " << *charPtr << endl;
    cout << "String: " << *strPtr << endl;

    // Delete
    delete intPtr;
    delete charPtr;
    delete strPtr;
    return 0;
}
