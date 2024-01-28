#include <iostream>
using namespace std;
int main()
{
    int row = 1, n;
    cout << "Enter The Number:";
    cin >> n;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
