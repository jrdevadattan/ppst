#include <iostream>
using namespace std;

int main() {
    int n, i, temp;
    int j = 1;
    cin>>n;
    cout<<i<<" "<<j<<" ";
    for (int a=0; a<n-2;a++){
        temp = j;
        j += i;
        i = temp;
        cout<<j<<" ";
    }
}
