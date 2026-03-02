// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string greeting = "Hello, ";
    string name;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<greeting + name;
}
