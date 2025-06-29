#include <iostream>
using namespace std;

char convert(char name)
{
    char x = name - 'a' + 'A';
    return x;
}
int main()
{
    char name;
    cout << "Enter the small character: ";
    cin >> name;

    cout << convert(name);
    return 0;
}