// Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Bubble Sort
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = 1;
        }
        if (swapped == 0)
            break;
    }

    cout << "The elements of the array after bubble sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}