#include <iostream>
using namespace std;
int main()
{
    int Fahrenheit, Celsius, Choose;
    cout << "Choose the Conversion Type :\n1)Fahrenheit to Celsius \n2)Celsius to Fahrenheit\n\n\nEnter Your Choose(1 or 2)\nChoose:";
    cin >> Choose;

    switch (Choose)
    {
    case 1:
        cout << "Enter The Temperature in Fahrenheit:" << endl;
        cin >> Fahrenheit;
        Celsius = (5 / 9) * (Fahrenheit - 32);
        cout << "Temperature in Celsius is:" << Celsius << endl;
        cout << "Enter 1 for restart and 0 for end " << endl;
        cin >> Choose;
        break;

    case 2:
        cout << "Enter The Temperature in Celsius:" << endl;
        cin >> Celsius;
        Fahrenheit = Celsius * (9 / 5) + 32;
        cout << "Temperature in  is:" << Fahrenheit << endl;
        cout << "Enter 1 for restart and 0 for end " << endl;
        cin >> Choose;
        break;
    }

    return 0;
}