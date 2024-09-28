#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int year;

    Car(string b, int y){
        brand = b;
        year = y;
    }
    void displayInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    Car car1 = Car("Toyota", 2020);
    Car car2 = Car("Honda", 2021);
    car1.displayInfo();
    car2.displayInfo();
    return 0;
}
