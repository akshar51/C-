#include <iostream>
using namespace std;

int main()
{
    // 

    int row, col, sum = 0, i, j, avg;
    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of column : ";
    cin >> col;
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Element at a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

}