#include <iostream>
using namespace std;

int main() {
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    int check = n;
    while (n != 0) {
        r = r *10 +n %10;
        n /= 10;
    }
    if (check == r) cout<<"Palindome";
    else cout<<"Not Palindrome";
}
