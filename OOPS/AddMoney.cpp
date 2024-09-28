#include <iostream>
using namespace std;
class Money {
private:
    int rupees;
    int paise;
public:
    Money(int r = 0, int p = 0) : rupees(r), paise(p) {
        normalize();
    }
    void normalize(){
        if (paise >= 100){
            rupees += paise / 100;
            paise = paise % 100;
        }
    }
    void setRupees(int r){
        rupees = r;
    }
    void setPaise(int p){
        paise = p;
    }
    Money add(Money m){
        Money result;
        result.rupees = rupees + m.rupees;
        result.paise = paise + m.paise;
        result.normalize();
        return result;
    }
    void display(){
        cout << rupees << "." << (paise < 10 ? "0" : "") << paise << endl;
    }
};
int main() {
    Money m1, m2;
    int r1, p1;
    cout << "Enter rupee and paise for first: " << endl;
    cin >> r1 >> p1;
    m1.setRupees(r1);
    m1.setPaise(p1);
    int r2, p2;
    cout << "Enter rupee and paise for second: " << endl;
    cin >> r2 >> p2;
    m2.setRupees(r2);
    m2.setPaise(p2);
    Money result = m1.add(m2);
    cout << "Sum ";
    result.display();
    return 0;
}
