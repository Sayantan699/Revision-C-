#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // vector<vector<int>> matrix;
    //  vector < vector<int> matrix(rows, vector<int>(cols, initialization));
    vector<vector<int>> matrix(4, vector<int>(3, 1));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    int rows = matrix.size();
    int col = matrix[0].size();
    return 0;
}