#include <iostream>
using namespace std;
int main() {
    int input;
    cout << "Enter an integer (1, 2 or 3):\n";
    cin >> input;
    try {
        if (input == 1)
            throw 1; // Integer Exception
        else if (input == 2)
            throw 'a'; // Character Exception
        else if (input == 3)
            throw 3.5; // Double Exception
        else {
            cerr << "Invalid Input Data." << endl;
        }
    }catch (int x){
        cout << "Integer Exception Caught..!! "<< x << endl;
    } catch (const char c) {
        cout << "Character Exception Caught..!! "<< c << endl;
    } catch (double d) {
        cout << "Double Exception Caught..!! " << d << endl;
    }
    return 0;
}
