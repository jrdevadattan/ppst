#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;
        return t;
    }

    Complex subtract(Complex c) {
        Complex t;
        t.real = real - c.real;
        t.imag = imag - c.imag;
        return t;
    }

    Complex multiply(Complex c) {
        Complex t;
        t.real = real * c.real - imag * c.imag;
        t.imag = real * c.imag + imag * c.real;
        return t;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4,3), c2(2,1);
    Complex c3 = c1.add(c2);
    Complex c4 = c1.subtract(c2);
    Complex c5 = c1.multiply(c2);
    c3.display();
    c4.display();
    c5.display();
    return 0;
}
