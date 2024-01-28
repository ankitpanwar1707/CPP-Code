#include <iostream>
using namespace std;
int set_bits(int a, int b)
{

    int count = 1, count1 = 1;
    if (a & 1)
    {
        count++;
        a = a >> 1;
    }
    if (b & 1)
    {
        count1++;
        b = b >> 1;
    }
    int total = count + count1;
    return total;
}
int main()
{
    int a, b;
    cin >> a, b;
    int ans = set_bits(a, b);
    cout << "No. Of Total Set Bits are:" << ans;
    return 0;
}