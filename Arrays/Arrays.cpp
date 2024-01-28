#include <iostream>
using namespace std;
int main()
{
    int arr[11];
    fill_n(arr, 11, -100);
    for (int i = 0; i <= 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
