#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Sorting the array before applying Binary search using bubble sort
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "The elements of the array after bubble sorting are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int k;
    cout << "Enter the element u want to search: ";
    cin >> k;

    int start = 0, end = n - 1;
    int mid;

    // Binary search
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            cout << k << " found at index: " << mid;
            break;
        }
        else if (arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}