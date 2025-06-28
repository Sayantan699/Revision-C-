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
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 2;
    }

    cout << "The Decimal Form is: " << ans;
    return 0;
}