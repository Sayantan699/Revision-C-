// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 65; j < 65 + i; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
    return 0;
}