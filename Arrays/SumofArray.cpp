#include <iostream>
using namespace std;
int arraySum(int arr[], int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        sum = sum + arr[i];
        i++;
    }
    return sum;
}
int main()
{
    int size;
    int arr[100];
    cout << "Enter The Size of Array:";
    cin >> size;
    int i = 0;
    while (i < size)
    {
        cin >> arr[i];
        i++;
    }
    int sum = arraySum(arr, size);
    cout << endl;
    cout << "Sum of Array is:" << sum << endl;
    return 0;
}