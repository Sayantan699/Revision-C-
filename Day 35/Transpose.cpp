#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of column(it should be equal to row): ";
    cin >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    // vector << int >> arr(row, vector<int> col);

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

    // transpose of the matrix

    for (int i = 0; i < row - 1; i++) // row just because row=col in square matrix
    {
        for (int j = i + 1; j < row; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "The transpose of the array: " << endl;
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