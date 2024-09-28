#include <iostream>
using namespace std;
class DayOfWeek {
private:
    int day;
public:
    DayOfWeek(int d){
        day = d;
    }
    void displayDay(){
        switch (day) {
            case 1: cout << "Monday" << endl; break;
            case 2: cout << "Tuesday" << endl; break;
            case 3: cout << "Wednesday" << endl; break;
            case 4: cout << "Thursday" << endl; break;
            case 5: cout << "Friday" << endl; break;
            case 6: cout << "Saturday" << endl; break;
            case 7: cout << "Sunday" << endl; break;
            default: cout << "Invalid day number." << endl;
        }
    }
};
int main() {
    int dayInput;
    cout << "Enter any day from 1 to 7:\n";
    cin >> dayInput;
    DayOfWeek dayOfWeek(dayInput);
    dayOfWeek.displayDay();
    return 0;
}
