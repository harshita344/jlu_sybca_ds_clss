// Write a C++ program to represent a 3x3 matrix in a 2D array.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int matrix[3][3];
    cout << "enter the numbers of a 3x3 matrix:";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) { 
            cin >> matrix[i][j];
        }
        }
        cout << "yourr matrix is:\n";
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
}