#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Composite Number" << endl;
            break;
        }
        else
        {
            cout << "Prime Number" << endl;
            break;
        }
    }
    return 0;
}