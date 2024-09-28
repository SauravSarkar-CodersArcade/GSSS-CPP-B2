#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    vector<int> numbers = {1,20,40,60};
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
//    for (int i = 0; i < numbers.size(); ++i) {
//        sum += numbers[i];
//    }
    cout << "Sum is: " << sum << endl;
    return 0;
}
