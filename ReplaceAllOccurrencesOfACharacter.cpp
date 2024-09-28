#include <iostream>
using namespace std;
void replaceAllOccurrences(string &str, char oldChar, char newChar){
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == oldChar){ // Z
            str[i] = newChar; // S
        }
    }
}
int main() {
    string str;
    cout << "Enter the string:\n";
    getline(cin, str);
    char oldChar, newChar;
    cout << "Enter the old character:\n";
    cin >> oldChar;
    cout << "Enter the new character:\n";
    cin >> newChar;
    replaceAllOccurrences(str,oldChar,newChar);
    cout << "The new string is: " << str << endl;
    return 0;
}
