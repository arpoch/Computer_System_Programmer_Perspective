#include <iostream>
#include <limits.h>
using std::cout;

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len)
{
    int i = 0;
    for (i; i < len; i++)
        printf("%.2x ", *(start + i));
    cout << std::endl;
}

int main()
{
    //--------------Explicit Casting by Programmer-----------
    short int v = -12345;
    unsigned short uv = (unsigned short)v;
    cout << "v = " << v << "\nuv = " << uv << '\n';
    //-------------Implicit Casting by Compiler-------------
    unsigned u = UINT32_MAX;
    int tu = u;
    cout << "u = " << u << "\ntu = " << tu << '\n';
    //---------------Two's Complement to Unsigned(Numeric Value)-------------------
    short int comp = -12345;
    unsigned short uncomp = (unsigned short)comp;
    cout << "Implicit convertion from two's complement to unsigned = " << uncomp << '\n';
    if (comp < 0)
    {
        cout << "Unsigned Numerical value = " << comp + UINT16_MAX + 1 << '\n';
    }
    else
        cout << "Unsigned Numerical value = " << uncomp << '\n';
    //---------------Unsigned to Two's Complement(Byte Value)-------------------
    show_bytes((byte_pointer)&comp, sizeof(short));
    show_bytes((byte_pointer)&uncomp, sizeof(short));
    //----------------Unsigned Value - Two's Complement-----------------
    cout << "Unsigned Value - Two's Complement = " << uncomp - comp << '\n';
    //---------------Unsigned to Two's Complement(Numeric Value)-------------------
    comp = uncomp;
    cout << "Implicit convertion from unsigned to two's complement = " << comp << '\n';
    if (comp > INT32_MAX)
    {
        cout << "Signed Numerical value = " << uncomp - UINT16_MAX - 1 << '\n';
    }
    else
        cout << "Signed Numerical value = " << comp << '\n';
    //---------------Unsigned to Two's Complement(Byte Value)-------------------
    show_bytes((byte_pointer)&comp, sizeof(short));
    show_bytes((byte_pointer)&uncomp, sizeof(short));
    return 0;
}