//Creating an expression equivalent to x==y

#include <iostream>
using std::cout;

int main()
{
    int x = 10, y = 50;
    cout << "Value of X = " << x << "\nValue of Y = " << y << '\n';
    cout << !(x ^ y) << '\n';
    return 0;
}