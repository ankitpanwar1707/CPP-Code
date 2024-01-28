#include <iostream>
using namespace std;
int dummy(int n)
{
    n++;
    cout << "The n is:" << n << endl;
    return 0;
}
void update(int n)
{
    n = n / 2;
}
int main()
{
    int n;
    cin >> n;
    dummy(n);
    update(n);
    cout << "The Number is:" << n << endl;
    return 0;
}