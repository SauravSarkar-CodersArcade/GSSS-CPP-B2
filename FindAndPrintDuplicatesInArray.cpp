#include <iostream>
using namespace std;
void findAndPrintDuplicates(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i] == arr[j]){
                cout << arr[i] << " ";
            }
        }
    }
}
int main() {
    int arr[] = {2,4,1,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The array duplicates are: ";
    findAndPrintDuplicates(arr,n);
    return 0;
}
