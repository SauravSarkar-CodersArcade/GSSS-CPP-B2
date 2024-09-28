#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> list1; // Default Constructor
    list<int> list2(3,10); // 10 10 10
    list<int> list3(list2); // Copy Constructor
    list1.push_back(10);
    list1.push_back(20);
    list1.insert(++list1.begin(), 15);
    for (auto x : list1){
        cout << x << " ";
    }
    cout << endl;
    // Removing the first & last elements
//    list1.pop_back();
//    list1.pop_front();
//    int last = list1.back();
//    int first = list1.front();
    // Traversals
    for (list<int>::iterator it = list1.begin(); it != list1.end(); ++it) { // Iterator
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = list1.begin(); it != list1.end(); ++it) { // Iterator
        cout << *it << " ";
    }
    cout << endl;
    for(int & it : list1){
        cout << it << " ";
    }
    cout << endl;
    for (auto it = list1.rbegin(); it != list1.rend();
    ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
