// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 0; k < (9 - (2 * i - 1)) / 2; k++)
        {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--)
        {
            cout << "*" << " ";
        }
        for (int k = 0; k < (9 - (2 * i - 1)) / 2; k++)
        {
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}