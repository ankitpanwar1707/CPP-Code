#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        // Print all Prime Number
        if (int number = !(n % i == 0))
        {
            cout << number;
        }
        else
        {
            continue;
        }
    }
    return 0;
}