#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter The Value Of N:";
    cin >> n;
    cout << endl;
    cout << "Printing count from 1 to N" << endl;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        cout << i << ":" << sum << endl;
    }
    return 0;
}