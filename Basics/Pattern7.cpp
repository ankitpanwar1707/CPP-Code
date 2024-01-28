#include <iostream>
using namespace std;
int main()
{
    int row = 1, n;
    cout << "enter The Number:";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char value = 'A' + row + col - 2;
            cout << value << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}