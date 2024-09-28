#include <iostream>
using namespace std;
class OverLoading {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }
    static void add(int a, int b, int c){
        cout << a + b + c << endl;
    }
    static void add(int a, float b){
        cout << "Float Function Called\n";
        cout << a + b << endl;
    }
    static void add(int a, double b){
        cout << "Double Function Called\n";
        cout << a + b << endl;
    }

};
int main() {
    OverLoading::add(1,2); // :: Scope Resolution Operator
    OverLoading::add(1,2,3);
    OverLoading::add(3,4.5f);
    OverLoading::add(4,6.8);
    return 0;
}
