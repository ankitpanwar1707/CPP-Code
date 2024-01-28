#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "A=";
    cin >> a;
    cout << "Value of n is:" << a << endl;
    if (a > 0)
    {
        cout << "A is Positive" << endl;
    }
    else if (a == 0)
    {
        cout << "A is Zero" << endl;
    }

    else
    {
        cout << "A is Negative" << endl;
    }
    return 0;
}