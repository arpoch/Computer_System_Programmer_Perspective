#include <iostream>
#include <math.h>
#include <limits.h>
using std::cout;
int main()
{
    cout << "1 : Unsigned Encoding\n";
    //----Principle => B2U = (i=w-1[summation]i=0) (xi*2^i)
    cout << "\t>Binary to Unsigned(w=4)\n";
    cout << "\t\tB2U[1111] = "
         << (1 * (2 * 2 * 2)) + (1 * (2 * 2)) + (1 * (2)) + (1)
         << '\n';
    unsigned short UMAX = pow(4, 2);
    cout << "\t>Range of Unsigned 4bit(nible) \n";
    cout << "\t\tThe greatest possible value with w=4 is UMAX[1111] = 2^w -1(as we count 0)"
         << UMAX << '\n';
    cout << "\t\tThe smalledt possible value with w=4 is UMIN[0000] = " << 0 << '\n';
    cout << "\t>Uniqueness of unsigned encoding\n";
    //No other value can have this encoding
    cout << "\t\tU2B[15] = "
         << "1111" << '\n';
    //---------------------------------------------------------------------------
    cout << "2 : Two’s-Complement Encoding\n";
    //----Principle => B2T = (- (xw-1)*2^w-1) + (i=w-1[summation]i=0) (xi*2^i)
    //Taking the weight of MSB -ve
    cout << "\t>Binary to Two's Complement(w=4)\n";
    cout << "\t\tB2U[1111] = "
         << (-1 * (2 * 2 * 2)) + (1 * (2 * 2)) + (1 * (2)) + (1)
         << '\n';
    cout << "\t>Range of Two’s-Complement 16bit \n";
    cout << "\t\tThe greatest possible value with w=16 is UMAX[11111111 11111111](as we count 0) = "
         << INT16_MAX << '\n';
    cout << "\t\tThe smalledt possible value with w=16 is UMIN[10000000 00000000] = "
         << INT16_MIN << '\n';
    cout << "3 : ones' Complement Encoding\n";
    cout << "\t>Binary to Signed(w=4)\n";
    cout << "\t\tB2U[1111] = "
         << ((1 * (2 * 2 * 2)) - 1) + (1 * (2 * 2)) + (1 * (2)) + (1)
         << '\n';
    cout << "\t>Range of Signed 4bit(nible) from -(2^w-1 -1) to (2^w-1)\n";
    cout << "\t\tThe greatest possible value with w=4 is UMAX[0111] = 2^w -1(as we count 0)"
         << "7" << '\n';
    cout << "\t\tThe smalledt possible value with w=4 is UMIN[1000] = "
         << " - 7 " << '\n';
    cout << "\t\tThe smalledt possible value with w=4 is UMIN[0000] = "
         << "1000 (In Binary)" << '\n';
    cout << "\t>Uniqueness of unsigned encoding\n";
    return 0;
}