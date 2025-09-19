// Write a program to create a matrix of size 3x2 having all the even numbers. In such a way that numbers in a second row should be double of numbers in a first row.
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    int num = 2;
    for (int j = 0; j < 3; j++) {
        matrix[0][j] = num;
        num += 2;
    }
    for (int j = 0; j < 3; j++) {
        matrix[1][j] = matrix[0][j] * 2;
    }

    cout << "The matrix is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
