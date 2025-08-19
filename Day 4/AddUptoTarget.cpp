
// Question : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//            You may assume that each input would have exactly one solution,
//            and you may not use the same element twice.

//                You can return the answer in any order.

//                Example 1 :

//     Input : nums = [ 2, 7, 11, 15 ],
//             target = 9 Output : [ 0, 1 ] Explanation : Because nums[0] + nums[1] == 9,
//             we return [ 0, 1 ].Example 2 :

//     Input : nums = [ 3, 2, 4 ],
//             target = 6 Output : [ 1, 2 ] Example 3 :

//     Input : nums = [ 3, 3 ],
//             target = 6 Output : [ 0, 1 ]

#include <iostream>

using namespace std;

void SumIndex(int arr[], int sz, int target)
{
    int c = 0;
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                cout << "Index of two Elements that add upto target: " << i << " " << j << endl;
                c = 1;
            }
        }
    }
    if (!c)
        cout << "Target not found!!";
}

int main()
{

    // int arr[] = {4, 5, 9, 10, 3, 2};
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int target;
    cout << "Enter the target value u wanna find: ";
    cin >> target;

    SumIndex(arr, n, target);

    return 0;
}