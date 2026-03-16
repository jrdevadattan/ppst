#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;
    cout << c.add(5, 3) << endl;
    cout << c.add(2.5f, 3.1f) << endl;
    cout << c.add(1, 2, 3) << endl;
    return 0;
}
