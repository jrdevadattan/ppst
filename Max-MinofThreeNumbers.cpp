#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cout << "enter a = ";
    cin >> a;
    int b;
    cout << "enter b = ";
    cin >> b;
    int c;
    cout << "enter c = ";
    cin >> c;
    
 if( a>=b && a>=c){
        cout << "Max no. = " << a << "  " << "Min no. = " << ((c<b)?(c):(b));
    }
    else if( b>=a && b>=c){
        cout << "Max no. = " << b << "  " << "Min no. = " << ((a<c)?(a):(c));
    }
    else {
        cout << "Max no. = " << c << "  " << "Min no. = " << ((a<b)?(a):(b));
    }
    return 0;
}
