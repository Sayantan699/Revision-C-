#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of column: ";
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

    // for even number of col top to down and for odd number of cols down to top

    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}