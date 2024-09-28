#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area(){
        return 0;
    }
};
class Circle : public Shape{
private:
    double radius;
public:
    Circle(double r) : radius(r){}
    double area() override {
        return M_PI * radius * radius;
    }
};
class Square : public Shape{
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};
class Triangle : public Shape{
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h){}
    double area() override {
        return 0.5 * base * height;
    }
};
int main() {
    Shape* circle = new Circle(3.5);
    Shape* square = new Square(10);
    Shape* triangle = new Triangle(2.4,3.6);
    cout << "Area of circle: " << circle->area() << endl;
    cout << "Area of square: " << square->area() << endl;
    cout << "Area of triangle: " << triangle->area() << endl;
    cout << "Max Integer: " << INT_MAX << endl;
    cout << "Min Integer: " << INT_MIN << endl;
    cout << "Max Integer + 1: " << INT_MAX + 1 << endl;
    cout << "Min Integer - 1: " << INT_MIN - 1 << endl;
    return 0;
}
