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
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
}