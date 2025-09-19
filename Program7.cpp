//Write a program to print the product of 2 matrices of size 4x4.
#include <iostream>
using namespace std;
int main() {
    int a[4][4], b[4][4], c[4][4];
    cout << "Enter elements of first matrix (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Product of the two matrices is:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}