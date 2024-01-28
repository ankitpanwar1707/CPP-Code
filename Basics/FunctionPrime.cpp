#include <iostream>
using namespace std;
bool isPrime(int n)
{
    // 0--> Not Prime No.
    // 1-->Prime no.
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Composite Number" << endl;
    }
    return 0;
}