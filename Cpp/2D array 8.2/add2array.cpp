#include <iostream>
using namespace std;

int main()
{
    // ADDITION OF 2D ARRAY AND STORE IN ANOTHER ARRAY

    int row, col, sum = 0, i, j;
    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of column : ";
    cin >> col;
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];
    cout<<endl<<endl;

    cout<<"Enter array A element :"<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Element at a[" << i << "][" << j << "] = ";
            cin >> arr1[i][j];
        }
    }

    cout<<endl<<endl;
    cout<<"Enter array B element :"<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Element at a[" << i << "][" << j << "] = ";
            cin >> arr2[i][j];
        }
    }

    cout<<endl<<endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }




}