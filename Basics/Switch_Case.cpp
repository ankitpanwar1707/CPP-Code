#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int choice;
    cout << "Calculator for Perform Operation like Addition,Subtraction,Multiplication,Division and Modules:" << endl;
    cout << "Enter The First Value for Perform Operation:" << endl;
    cin >> a;
    cout << "Enter The Second Value for Perform Operation:" << endl;
    cin >> b;
    cout << "Enter The Choice of Operation:" << endl;
    cout << "1)Addition" << endl;
    cout << "2)Subtraction" << endl;
    cout << "3)Multiplication" << endl;
    cout << "4)Division" << endl;
    cout << "5)Modules" << endl;
    cin >> choice;
    // while (choice)
    // {
    switch (choice)
    {
    case 1:
        cout << endl;
        cout << "Addtion:a+b=" << a + b << endl;
        break;
    case 2:
        cout << "Subtaction:a-b=" << a - b << endl;
        break;
    case 3:
        cout << "Multiplication:a*b=" << a * b << endl;
        break;
    case 4:
        cout << "Division:a/b=" << a / b << endl;
        break;
    case 5:
        cout << "Modules:a%b=" << a % b << endl;
        break;
    default:
        cout << "Your Enterd Wrong Choice";
    }
    // cout << "Enter 1 for Continue and 0 for exit:";
    // // cin >> choice;
    // if (choice = 0)
    // {
    //     exit(choice);
    // }
    // }
    return 0;
}