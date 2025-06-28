#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;
    while (num > 0)
    {
        rem = num & 1;  // extracting the last digit
        num = num >> 1; // dividing by 2^ x
        ans = rem * mul + ans;
        mul *= 10;
    }

    cout << "The Binary Form is: " << ans;

    return 0;
}