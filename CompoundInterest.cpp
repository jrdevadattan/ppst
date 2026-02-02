#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a;
    float i,t,ci;
    cout<<"Enter your initial amount"<<endl;
    cin>>i;
    cout<<"Enter time in years"<<endl;
    cin>>t;
    cout<<"we are providing 5% rate of interest"<<endl;
    cout<<"Press 1 to proceed Press 2 to exit"<<endl;
    cin>>a;
    switch (a) {
    case 1:
        ci=i*pow((1.05),t)-i;
        cout<<"compound interest "<<ci<<"/-"<<endl;
        break;
    case 2:
        break;
    default:
    break;
 }  
   return 0;
}

