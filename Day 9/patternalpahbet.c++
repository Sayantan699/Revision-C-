// a
// b b
// c c c
// d d d d
// e e e e e

#include <iostream>
using namespace std;

int main()
{

    for (int i = 97; i < 102; i++)
    {
        for (int j = 97; j <= i; j++)
        {
            cout << (char)i << " ";
        }
        cout << endl;
    }
    return 0;
}