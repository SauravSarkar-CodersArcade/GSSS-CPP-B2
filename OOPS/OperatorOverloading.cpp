#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int v) : value(v){}
    Counter operator++(){
        value++;
        // return value;
        return *this; // It is the current state of the obj
    }
    Counter operator--(){
        value--;
        // return value;
        return *this; // It is the current state of the obj
    }
    void display(){
        cout << value << endl;
    }
};
int main() {
    // Operator Overloading C++, Python, JavaScript
    Counter counter1(10); // Object 1
    Counter counter2(20); // Object 2
    // Increment & Decrement (Unary Operators) -> integers
    ++counter1;
    counter1.display();
    --counter1;
    counter1.display();
    return 0;
}
