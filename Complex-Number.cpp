#include <iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
        Complex(int r, int i){
            real = r;
            imag = i;
        }
    
        Complex add(Complex c){
            return Complex(real + c.real, imag + c.imag);
        }
    
        Complex sub(Complex c){
            return Complex(real - c.real, imag - c.imag);
        }
    
        Complex mul(Complex c){
            return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
        }
    
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(4,3), c2(2,5);
    Complex s = c1.add(c2);
    Complex d = c1.sub(c2);
    Complex m = c1.mul(c2);
    s.display();
    d.display();
    m.display();
}
