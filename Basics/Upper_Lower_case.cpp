#include <iostream>
using namespace std;
void Count(string str)
{
    int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= "A" && str[i] <= "Z")
        {
            upper++;
        }
        else if (str[i] >= "a" && str[i] <= "z")
        {
            lower++;
        }
        else if (str[i] >= "0" && str[i] <= "9")
        {
            number++;
        }
        else
        {
            special++;
        }
    }
    cout << "Upper Case Letters:" << upper << endl;
    cout << "Lower Case Letters:" << lower << endl;
    cout << "Number:" << number << endl;
    cout << "Special Case Letters:" << special << endl;
}
int main()
{
    string str;
    cout << "Enter String:";
    cin >> str;
    Count(str);
    return 0;
}