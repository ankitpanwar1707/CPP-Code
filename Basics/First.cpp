#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    char ch = 'A';
    float f = 10.6329802742898567867898;
    bool b = false;
    double d = 10.57878897327864273891273;
    cout << "Namaste Duniya :-)" << endl;
    cout << "A=" << a << endl;
    cout << "Number of Bytes taken by Integer is:" << sizeof(a) << endl;
    cout << "Ch=" << ch << endl;
    cout << "Number of Bytes taken by character is:" << sizeof(ch) << endl;
    cout << "F=" << f << endl;
    cout << "Number of Bytes taken by Float is:" << sizeof(f) << endl;
    cout << "Bool=" << b << endl;
    cout << "Number of Bits taken by Boolean is:" << sizeof(b) << endl;
    cout << "D=" << d << endl;
    cout << "Number of Bytes taken by Double is:" << sizeof(d) << endl;
    return 0;
}