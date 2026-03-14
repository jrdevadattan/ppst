#include <iostream>
using namespace std;

class Matrix {
    int a[10][10], r, c;
    public:
        Matrix(int x, int y) {
            r = x;
            c = y;
        }
        void input() {
            cout << "Enter matrix elements:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    cin >> a[i][j];
        }
        void display() {
            for(int i=0;i<r;i++) {
                for(int j=0;j<c;j++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
        }
        Matrix add(Matrix m) {
            Matrix res(r,c);
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    res.a[i][j] = a[i][j] + m.a[i][j];
            return res;
        }
        Matrix sub(Matrix m) {
            Matrix res(r,c);
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    res.a[i][j] = a[i][j] - m.a[i][j];
            return res;
        }
};

int main() {
    int r,c;
    cout << "Enter number of rows and columns of matrices: ";
    cin >> r >> c;
    Matrix m1(r,c), m2(r,c);
    cout << "Enter elements of first matrix:\n";
    m1.input();
    cout << "Enter elements of second matrix:\n";
    m2.input();
    Matrix sum = m1.add(m2);
    Matrix diff = m1.sub(m2);
    Matrix prod = m1.mul(m2);
    cout << "\nAddition of matrices:\n";
    sum.display();
    cout << "\nSubtraction of matrices:\n";
    diff.display();
}
