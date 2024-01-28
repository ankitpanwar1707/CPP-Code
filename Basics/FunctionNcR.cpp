#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    int i = 1;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    int ans = num / denom;
    return ans;
}
int main()
{
    int r, n;
    cin >> n >> r;
    cout << "Answer is:" << nCr(n, r) << endl;
}