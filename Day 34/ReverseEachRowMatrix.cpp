// Reverse Each Row of Matrix

// A 2D Matrix is given we have to reverse the each row of matrix

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of cols: ";
    cin >> col;

    int arr[row][col];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int start = 0, end = col - 1;
    for (int i = 0; i < row; i++)
    {
        while (start <= end)
        {
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    cout << endl;

    cout << "The elements of the array after being swapped are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}