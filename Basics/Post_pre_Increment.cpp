#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    int z = i++;
    cout << i << endl;
    cout << z << endl;
    int u = --i;
    cout << u << endl;
    cout << i << endl;
    cout << endl;
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
    cout << endl;
    int q = 1;
    int w = 2;
    if (q-- > 0 && ++w > 2)
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "Stage2 - Inside else";
    }
    cout << endl;
    cout << q << " " << w << endl;
    int number = 3;
    cout << (25 * (++number)) << endl;
    int r = 1;
    int t = r++;
    int y = ++r;
    cout << t << endl;
    cout << y << endl;
    return 0;
}