#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(6);
    s.insert(61);
    s.insert(26);
    s.insert(6);
    s.insert(36);
    s.insert(6);
    cout << "Elements in the set(Hash Order): ";
    for (int x : s){
        cout << x << " ";
    }
    cout << endl;
    // Search an element
    int searchElement = 136;
    auto it = s.find(searchElement);
    if (it != s.end()){
        cout << "Element " << searchElement << " Found\n";
    }else{
        cout << "Element " << searchElement << " Not Found\n";
    }
    // Remove an element
    s.erase(26);
    cout << "Elements after removing 26: ";
    for (int x : s){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
