#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    if (a > b) cout << a;
    if (a < b) cout << a;
    else cout << b;
    cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "A / B = " << a / b << '\n';
}
