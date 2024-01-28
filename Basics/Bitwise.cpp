#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    int And = a & b;
    int Or = a | b;
    int Xor = a ^ b;
    int Not = ~a;
    int left = 17 >> 1;
    int left1 = 17 >> 2;
    int Right = 19 << 1;
    int Right1 = 21 << 2;
    cout << "a&b=" << And << endl;
    cout << "a|b=" << Or << endl;
    cout << "a^b=" << Xor << endl;
    cout << "~a=" << Not << endl;
    cout << endl;
    cout << "17>>1=" << left << endl;
    cout << "17>>2=" << left1 << endl;
    cout << "19<<1=" << Right << endl;
    cout << "21<<2=" << Right1 << endl;
}