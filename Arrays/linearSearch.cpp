#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size, key;
    int arr[100];
    cout << "Enter The Size of Array:";
    cin >> size;
    cout << "Enter The Array Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cout << "Enter The Key:";
    cin >> key;

    bool found = search(arr, size, key);
    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }

    return 0;
}