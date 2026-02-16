#include <iostream>
using namespace std;

int main() {
    int n, num, mid, low, high, found;
    cout<<"Enter n: ";
    cin>>n;
    low = 0; high = n-1;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter number to find: ";
    cin>>num;
    while (low<=high) {
        mid = (low+high)/2;
        if (arr[mid] == num) {
            cout<<"Found at index: "<<mid;
            found = 1;
            break;
        }
        else if (arr[mid]<num) low = mid + 1;
        else high = mid - 1;
    }
    if (!found) cout<<"Number not in array";
}
