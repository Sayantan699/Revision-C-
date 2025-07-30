#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows of the first matrix: ";
    cin >> row;

    cout << "Enter the number of columns of the  first matrix: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter the elements of the first array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the first array are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[row][col];

    cout << "Enter the elements of the second array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "The elements of the second array are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // sum of two 2d array
    int add[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    cout << "The elements of the add array are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}