#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1,2,3,4,5};
    for (auto x : numbers){
        cout << x << " ";
    }
    cout << endl;
    for (int x : numbers){
        cout << x << " ";
    }
    cout << endl;
    for (int i=0; i<numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    // Initialisation with size
    vector<int> vector1(5); // n elements all 0
    vector<int> vector2(5,15); // n elements all 15
    // Initialisation from array
    int arr[] = {11,21,13};
    vector<int> vector3(arr, arr+3); // 3 = size
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    // Important functions in vectors
    vector3.push_back(20);
    vector3.push_back(25);
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector3.pop_back();
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    cout << "Size of vector: " << vector3.size() << endl;
    cout << "Capacity: " << vector3.capacity() << endl;
    vector3.resize(10); // resizes to 10 elements
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector3.resize(15,100);
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
//    vector3.clear();
//    for (int num : vector3){
//        cout << num << " ";
//    }
//    cout << endl;
    vector3.insert(vector3.begin(), 0);
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector3.insert(vector3.begin()+1, 99);
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector3.erase(vector3.begin());
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector3.erase(vector3.begin(),
                  vector3.begin()+2);
    for (int num : vector3){
        cout << num << " ";
    }
    cout << endl;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    v1.swap(v2);
    for (auto x : v1){
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v2){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
