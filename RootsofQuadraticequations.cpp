#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "For equation ax^2 + bx + c\n";
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "Enter c = ";
    cin >> c;

    if(a == 0) {
        cout << "Not a quadratic equation";
        return 0;
    }

    double D = b*b - 4*a*c;

    if(D > 0) {
        cout << "Roots are real and distinct\n";
        cout << "Roots = " 
             << (-b + sqrt(D)) / (2*a) << " and "
             << (-b - sqrt(D)) / (2*a);
    }
    else if(D == 0) {
        cout << "Roots are real and equal\n";
        cout << "Root = " << (-b / (2.0*a));
    }
    else {
        cout << "Roots are imaginary";
    }

    return 0;
}
