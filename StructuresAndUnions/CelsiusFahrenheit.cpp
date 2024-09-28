#include <iostream>
using namespace std;
union Temperature {
    float celsius;
    float fahrenheit;
};
float celsiusToFahrenheit(float c){
    return (c * 9 / 5) + 32;
}
float fahrenheitToCelsius(float f){
    return (f - 32) * 5 / 9;
}
int main() {
    Temperature temp;
    int choice;
    cout << "Enter 1 for input Celsius & 2 for input Fahrenheit:\n";
    cin >> choice;
    if (choice == 1){
        cout << "Enter the temperature in degree Celsius:\n";
        cin >> temp.celsius;
        cout << "The fahrenheit value is: " <<
        celsiusToFahrenheit(temp.celsius) << " degrees." << endl;
    } else{
        cout << "Enter the temperature in degree Fahrenheit:\n";
        cin >> temp.fahrenheit;
        cout << "The celsius value is: " <<
        fahrenheitToCelsius(temp.fahrenheit) << " degrees." << endl;
    }
    return 0;
}
