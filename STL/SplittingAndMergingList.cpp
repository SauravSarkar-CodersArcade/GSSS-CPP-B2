#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() {
    list<int> lst = {1,2,3,4,5,6};
    // Create two lists
    list<int> lst1, lst2;
    auto it = lst.begin();
    advance(it, lst.size() / 2); // Traverse to the mid-point
    // Splitting the list into two splice()
    lst1.splice(lst1.begin(), lst, lst.begin(), it);
    lst2.splice(lst2.begin(), lst, lst.begin(), lst.end());

    cout << "List 1: ";
    for (int x : lst1) {
        cout << x << " ";
    }
    cout << endl;
    cout << "List 2: ";
    for (int x : lst2) {
        cout << x << " ";
    }
    cout << endl;

    // Merging them back:
    lst1.merge(lst2);
    cout << "List 1: ";
    for (int x : lst1) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
