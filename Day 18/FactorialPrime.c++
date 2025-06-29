#include <iostream>
#include <cmath>
using namespace std;

int prime(int b)
{
    if (b < 2)
        return 0;

    for (int i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
            return 0;
    }

    return 1;
}

int Factorial(int a)
{

    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if (prime(b))
        cout << b << " is a prime number.." << endl;
    else
        cout << b << " is not a prime number.." << endl;
    cout << "Factorial of number is: " << Factorial(a);
    return 0;
}