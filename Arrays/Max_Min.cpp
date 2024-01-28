#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;
    int i = 0;
    while (i < n)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        i++;
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;
    int i = 0;
    while (i < n)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int size;
    int num[100];
    cout << "Enter The Size of Array:";
    cin >> size;
    int i = 0;
    while (i < size)
    {
        cout << endl;
        cin >> num[i];
        i++;
    }
    cout << "Maximum value is:" << getMax(num, size) << endl;
    cout << "Minimum value is:" << getMin(num, size) << endl;
}