#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {

        int bit = n & 1;

        // Reverse Flow
        // ans=(ans * 10) + digit;

        // Serial Flow
        // ans= (10^i *digit) + ans

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is:" << ans << endl;
    return 0;
}