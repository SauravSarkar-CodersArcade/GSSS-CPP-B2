#include <iostream>
using namespace std;
void printNumberPyramid(int rows){
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    printNumberPyramid(n);
    return 0;
}
