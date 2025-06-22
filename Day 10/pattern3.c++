//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++) // n-row
        {
            cout << "  ";
        }
        for (int j = 65; j <= 65 + i; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
    return 0;
}
