#include <iostream>
using namespace std;

int main() {
    int n,sum;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1; i <=n; i++){
        sum+=i;
    }
    cout<<"Sum of series is "<<sum;
}
