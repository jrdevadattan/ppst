#include <iostream>
using namespace std;

class StringOp{
    string s1, s2;
    public:
        void input(){
            cout << "Enter first string: ";
            cin >> s1;
            cout << "Enter second string: ";
            cin >> s2;
        }
        void concatenate(){
            string result = s1 + s2;
            cout << "Concatenated string: " << result << endl;
        }
        void compare(){
            if(s1 == s2)
                cout << "Strings are equal" << endl;
            else
                cout << "Strings are not equal" << endl;
        }
        void length(){
            cout << "Length of first string: " << s1.length() << endl;
            cout << "Length of second string: " << s2.length() << endl;
        }
};

int main(){
    StringOp s;
    s.input();
    s.concatenate();
    s.compare();
    s.length();
}
