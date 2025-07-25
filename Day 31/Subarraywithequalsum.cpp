// [3,4,-2,5,8,20,-10,8]
// [3,4,-2,5,8],[20,-10,8]  if sub-array is possible with

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int ans = 0;
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    int prefix = 0;
    bool found = false;
    for (int j = 0; j < n - 1; j++)
    {
        prefix += arr[j];
        int suffix = total_sum - prefix;

        if (prefix == suffix)
        {
            found = true;
            cout << "Sub array with equal sum exits at index: " << j << endl;
            cout << "First sub-array: " << endl;
            for (int k = 0; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;

            cout << "Second sub-array: " << endl;
            for (int k = j + 1; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;

            break;
        }
    }

    if (!found)
        cout << "No such sub-array exists." << endl;

    return 0;
}