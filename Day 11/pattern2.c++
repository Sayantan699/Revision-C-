//             1
//         1   2   1
//     1   2   3   2   1
//   1 2   3   4   3   2   1
// 1 2 3   4   5   4   3   2   1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}