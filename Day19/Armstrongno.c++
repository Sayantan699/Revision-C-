#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int num)
{
    int c = 0;
    while (num > 0)
    {
        c++;
        num /= 10;
    }
    return c;
}

int armstrong(int num, int dig)
{
    int temp;
    int ans = 0;
    int original = num;

    while (original > 0)
    {
        temp = original % 10;
        ans += round(pow(temp, dig));
        original /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    int dig = countdigit(num);

    cout << "Armstrong value: " << armstrong(num, dig);

    return 0;
}
