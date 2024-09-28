#include <iostream>

using namespace std; // GIT
namespace Radhika {
    void add(int a, int b) {
        cout << a+b << endl;
    }
}
namespace Poornima {
    void add(int a, int b) {
        cout << a+b << endl;
    }
}
namespace Neha {
    void add(int a, int b) {
        cout << a+b << endl;
    }
}
int main(){
    // DRY -> Don't repeat yourself
    // std -> namespace
    // cout -> function
    Radhika::add(1,2);
    Poornima::add(2,3);
    Neha::add(3,4);
    int a = 10;
    auto b = 2.5;
    auto c = 2.5f;
    string str;
    cout << "Enter the string:" << endl;
    // We use getline because cin can only read one word at a time
    // Anything after the space is ignored
    getline(cin, str);
    cout << str;
    return 0;
}