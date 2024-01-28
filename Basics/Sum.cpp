#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter The Value of N:";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum=" << sum << endl;
    return 0;
}