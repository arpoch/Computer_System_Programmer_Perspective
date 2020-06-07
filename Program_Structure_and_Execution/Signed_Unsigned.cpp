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
    short int sn_16 = -12345;
    unsigned short usn_16 = (unsigned short)sn_16;
    cout << "sn_16 = " << sn_16 << "\nusn_16 = " << usn_16 << '\n';
    //-------------Implicit Casting by Compiler-------------
    unsigned usn_32 = UINT32_MAX;
    int sn_32 = usn_32;
    cout << "usn_32 = " << usn_32 << "\ntsn_32 = " << sn_32 << '\n';
    //---------------Two's Complement to Unsigned(Numeric Value)-------------------
    cout << "Two's complement value (-ve) = " << sn_16 << '\n';
    if (sn_16 < 0)
    {
        cout << "Unsigned Numerical value by adding 2^16 to -12345= " << sn_16 + UINT16_MAX + 1 << '\n';
    }
    else
        cout << "Unsigned Numerical value without adding 2^16 to -12345= " << usn_16 << '\n';
    //---------------Unsigned to Two's Complement(Numeric Value)-------------------
    unsigned short temp_16 = INT16_MAX + 120;
    cout << "Unsigned value  = " << temp_16 << '\n';
    if (temp_16 > INT16_MAX)
    {
        cout << "Signed Numerical value by substracting 2^16 from 32767= " << temp_16 - UINT16_MAX - 1 << '\n';
    }
    else
        cout << "Signed Numerical value without substracting 2^16 = " << temp_16 << '\n';
    //---------------Unsigned and Two's Complement(8Byte Value)-------------------
    cout << "Signed Byte Representation 16bit ";
    show_bytes((byte_pointer)&sn_16, sizeof(short));
    cout << "Unsigned Byte Representation 16bit ";
    show_bytes((byte_pointer)&usn_16, sizeof(unsigned short));
    //-------------------Unsigned Byte Representation with zero extension on 32bit---------------------
    usn_32 = usn_16;
    sn_32 = sn_16;
    cout << "Unsigned Byte Representation 32bit\n";
    cout << "usn = " << usn_32 << " : ";
    show_bytes((byte_pointer)&usn_32, sizeof(unsigned));
    //-------------------Signed Byte Representation with signed extension on 32bit---------------------
    cout << "Signed Byte Representation 32bit\n";
    cout << "sn = " << sn_32 << " : ";
    show_bytes((byte_pointer)&sn_32, sizeof(int));
    //--------Conversion from Signed(16bit) to Unsigned(32bit)-----------
    cout << "Conversion from Signed(16bit) to Unsigned(32bit)\n";
    short sval_16 = -12345;
    unsigned uval_32 = sval_16;
    cout << "uval_32 = " << uval_32 << " : ";
    show_bytes((byte_pointer)&sn_32, sizeof(int));
    return 0;
}