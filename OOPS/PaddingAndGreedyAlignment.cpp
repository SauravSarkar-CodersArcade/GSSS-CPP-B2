#include <iostream>
using namespace std;
class GSSS {
    double d; // 8 bytes
    int i; // 4 bytes
    short s; // 2
    char c; // 1 byte
};
int main() {
    GSSS obj;
    cout << "Size of the class is: " << sizeof(obj) << " Bytes.\n";
    return 0;
}
