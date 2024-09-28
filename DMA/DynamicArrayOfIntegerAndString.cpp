#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the integer & string arrays:\n";
    cin >> n;
    // Dynamic Integer Array
    int * intArray = new int[n];

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> intArray[i];
    }
    cout << "The array elements are:\n";
    for (int i = 0; i < n; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Dynamic String Array
    string * strArray = new string[n];
    cout << "Enter the string array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> strArray[i];
    }
    cout << "\nThe array elements are:\n";
    for (int i = 0; i < n; ++i) {
        cout << strArray[i] << " ";
    }
    cout << endl;

    int ** twoD = new int * [n];
    cout << "Enter the 2D array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        // Allocate memory for each row
        twoD[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> twoD[i][j];
        }
    }
    cout << "\nPrinting the 2D Array:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate
    delete[] intArray;
    delete[] strArray;
    delete[] twoD;
    return 0;
}
