//Write a program to create 2 matrix of size 3x3 and take input from user and print thhe sum of 2 matrix.
#include <iostream>
using namespace std;
int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "The sum of the two matrices is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}