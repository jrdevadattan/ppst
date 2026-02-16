#include<iostream>
using namespace std;

int main(){
    int n,key,found=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        cout<<"Found at index: "<<i;
        found=1;
        break;
    }
    }
    if(found==0) cout<<"Not Found";
}
