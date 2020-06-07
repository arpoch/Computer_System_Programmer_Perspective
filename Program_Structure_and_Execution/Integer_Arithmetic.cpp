#include <iostream>
#include <limits.h>
using std::cout;
int main()
{
    cout << "Modular Arithmetics\n";
    //Here (value mod 2^w) discards the bit weight greater than 2^w-1
    //-----------------------Unsigned Addition-----------------------
    cout << "Unsigned Addition\n";
    uint32_t un_x_32 = 0xFFFFFF12;
    uint32_t un_y_32 = 0xFFFFFF12;
    //if x+y >= 2^w then x+y-2^w
    if ((0xFFFFFF12 + 0xFFFFFF12) < un_x_32 || (0xFFFFFF12 + 0xFFFFFF12) < un_y_32)
    {
        cout << "OVERFLOW\n";
        cout << un_x_32 + un_y_32 << '\n';
    }
    else
    {
        cout << un_x_32 + un_y_32 << '\n';
    }
    cout << "Unsigned Negation(additive inverse)\n";
    if (un_x_32 == 0)
    {
        cout << "Additive Inverse(Two's Complement is Additive inverse) = " << un_x_32 << '\n';
    }
    else
    {
        cout << "Additive Inverse(Two's Complement is Additive inverse) = " << (UINT32_MAX + 1) - un_x_32 << '\n';
    }
    return 0;
}