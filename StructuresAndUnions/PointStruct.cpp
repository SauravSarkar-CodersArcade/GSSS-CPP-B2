#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
};
Point inputPoint() {
    Point p;
    cout << "Enter the x & y coordinates:" << endl;
    cin >> p.x >> p.y;
    return p;
}
void display(Point p){
    cout << "Point (" << p.x << ", " << p.y << ")" << endl;
}
int main() {
    Point p = inputPoint();
    display(p);
    return 0;
}
