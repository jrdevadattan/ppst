#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Area of Circle\n2. Volume of Cube\n3. Volume of Cylinder\n";
    cout << "Choose option: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of circle = " << 3.14 * r * r;
            break;
        }
        case 2: {
            int a;
            cout << "Enter side of cube: ";
            cin >> a;
            cout << "Volume of cube = " << a * a * a;
            break;
        }
        case 3: {
            int r, h;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Enter height: ";
            cin >> h;
            cout << "Volume of cylinder = " << 3.14 * r * r * h;
            break;
        }
        default:
            cout << "Invalid option";
    }
    return 0;
}
