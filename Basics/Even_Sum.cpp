#include <iostream>
using namespace std;
int main()
{
    int i = 2, sum = 0, n;
    cout << "enter The valuw of N:";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum:" << sum << endl;
    return 0;
}
