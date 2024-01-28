#include <iostream>
using namespace std;
int AP(int n)
{
    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;
    int nth_Term = AP(n);
    cout << "Nth Term is:" << nth_Term;
    return 0;
}
