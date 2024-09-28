#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    set<int> set1 = {1,2,3,4,5};
    set<int> set2 = {3,4,5,6,7};
    vector<int> commonElements;
    set_intersection
    (set1.begin(), set1.end(), set2.begin(),set2.end(),
     back_inserter(commonElements));
    for (int comm : commonElements) {
        cout << comm << " ";
    }
    cout << endl;
    return 0;
}
