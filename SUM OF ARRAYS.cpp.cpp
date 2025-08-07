#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix1[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
         {4, 5, 6}
    };

    int matrix2[rows][cols] = {
        {7, 8, 9},
        {10, 11, 12},
         {4, 5, 6}
    };

    int sum[rows][cols];

    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

 
    cout << "Matrix 1:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << "Matrix 2:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of the two matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}