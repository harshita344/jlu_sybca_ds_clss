//Write a program to find the determinat of a matrix size input by the user.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[10][10];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int det = 0;
    if (n == 2) {
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            int submatrix[10][10];
            for (int j = 1; j < n; j++) {
                int col = 0;
                for (int k = 0; k < n; k++) {
                    if (k != i) {
                        submatrix[j - 1][col] = matrix[j][k];
                        col++;
                    }
                }
            }
            int subdet = 0;
            if (n - 1 == 2) {
                subdet = submatrix[0][0] * submatrix[1][1] - submatrix[0][1] * submatrix[1][0];
            } else {
                // Recursive case for larger matrices
                for (int j = 0; j < n - 1; j++) {
                    int col = 0;
                    for (int k = 0; k < n - 1; k++) {
                        if (k != j) {
                            submatrix[k][col] = submatrix[k + 1][j];
                            col++;
                        }
                    }
                    subdet += (j % 2 == 0 ? 1 : -1) * submatrix[0][j] * submatrix[1][j];
                }
            }
            det += (i % 2 == 0 ? 1 : -1) * matrix[0][i] * subdet;
        }
    }

    cout << "The determinant is: " << det << endl;
    return 0;
}