#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns (max 10 each): ";
    cin >> rows >> cols;

    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10) {
        cout << "Dimensions must be between 1 and 10." << endl;
        return 1;
    }

    int matrix[10][10];

    // Read elements into the 2D array
    cout << "Enter matrix elements:" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

    // Calculate and print sum of each row
    cout << "\nRow-wise sums:" << endl;
    for (int r = 0; r < rows; r++) {
        int rowSum = 0;
        for (int c = 0; c < cols; c++) {
            rowSum += matrix[r][c];
        }
        cout << "Row " << r << " sum = " << rowSum << endl;
    }

    // Calculate and print sum of each column
    cout << "\nColumn-wise sums:" << endl;
    for (int c = 0; c < cols; c++) {
        int colSum = 0;
        for (int r = 0; r < rows; r++) {
            colSum += matrix[r][c];
        }
        cout << "Column " << c << " sum = " << colSum << endl;
    }

    return 0;
}