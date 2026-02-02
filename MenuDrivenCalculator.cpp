#include<iostream>
using namespace std;
int main() {

    int x ;
    cout << "(1) Addition \n(2) Subtraction \n(3) Multiplication \n(4) Division \n(5) Modulus \n";
    cout << "choose operation to perform = ";
    cin >> x;

    int a;
    cout << "enter a = ";
    cin >> a;
    
    int b;
    cout << "enter b = ";
    cin >> b;
    
    switch (x)
    {
    case 1:
        cout << "Sum = " << a+b << endl;
        break;
    case 2:
        cout << "Difference = " << a-b << endl;
        break;
    case 3:
        cout << "Product = " << a*b << endl;
        break;
    case 4:
        cout << "Division = " << a/b << endl;
        break;
    case 5:
        cout << "Remainder = " << a%b << endl;
        break;
    default:
        cout << "choose valid operation";
        break;
    } 
    return 0;
}

