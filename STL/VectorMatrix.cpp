#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix;
    // In a 2D matrix -> Unequal Rows -> Jagged Array
    matrix = {
            {1,2,3,4},
            {6,7,8,9,0},
            {5,4,3,2},
            {0,9,8,7,6}
    };
    for (auto row : matrix){
        for(int x : row){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
