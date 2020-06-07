#include <iostream>
#include <math.h>
#include <limits.h>
using std::cout;
int main()
{
     cout << "1 : Unsigned Encoding\n";
     //----Principle => B2U = (i=w-1[summation]i=0) (x.i*2^i)
     cout << "\t>Binary to Unsigned(w=4)\n";
     cout << "\t\tB2U[1111] = "
          << (1 * (2 * 2 * 2)) + (1 * (2 * 2)) + (1 * (2)) + (1)
          << '\n';
     cout << "\t>Range of Unsigned 4bit(nible) 0 to 2^w \n";
     cout << "\t\tThe greatest possible value with w=4 is UMAX[1111] ="
          << 15 << '\n';
     cout << "\t\tThe smalledt possible value with w=4 is UMIN[0000] = " << 0 << '\n';
     cout << "\t>Uniqueness of unsigned encoding\n";
     //No other value can have this encoding
     cout << "\t\tU2B[15] = "
          << "1111" << '\n';
     //---------------------------------------------------------------------------
     cout << "2 : Two’s-Complement Encoding\n";
     //----Principle => B2T = (- (x.w-1)*2^w-1) + (i=w-2[summation]i=0) (xi*2^i)
     //Taking the weight of MSB -ve
     cout << "\t>Binary to Two's Complement(w=4)\n";
     cout << "\t\tB2U[1111] = "
          << (-1 * (2 * 2 * 2)) + (1 * (2 * 2)) + (1 * (2)) + (1)
          << '\n';
     cout << "\t>Range of Two’s-Complement 16bit (2^w-1 to (2^w-1) -1) \n";
     cout << "\t\tThe greatest possible value with w=16 is TMAX[01111111 11111111](as we count 0) = "
          << INT16_MAX << '\n';
     cout << "\t\tThe smalledt possible value with w=16 is TMIN[10000000 00000000] = "
          << INT16_MIN << '\n';
     cout << "UMAX = 2TMAX +1 (16bit) = " << (2 * INT16_MAX) + 1 << '\n';
     //---------------------------------------------------------------------------
     //----Principle => B2O = (- (x.w-1)*(2^w-1 -1) ) + (i=w-2[summation]i=0) (xi*2^i)
     //Taking the weight of MSB -ve
     cout << "3 : Ones' Complement Encoding\n";
     cout << "\t>Binary to Signed(w=4)\n";
     cout << "\t\tB2U[1111] = "
          << (-1 * ((2 * 2 * 2) - 1)) + (1 * (2 * 2)) + (1 * (2)) + (1)
          << '\n';
     cout << "\t>Range of Signed 4bit(nible) from -(2^w-1 -1) to (2^w-1 -1)\n";
     cout << "\t\tThe greatest possible value with w=4 is OMAX[0111] = "
          << "7" << '\n';
     cout << "\t\tThe smalledt possible value with w=4 is OMIN[1000] = "
          << " -7 " << '\n';
     cout << "\t\tRepresentation of -0 with w=4 is = "
          << "1111 (In Binary)" << '\n';
     //--------------------------------------------------------------------------
     //----Principle => B2T = ((x.w-1)*-1) * (i=w-2[summation]i=0) (xi*2^i)
     //Taking the MSB -ve , it has no weight and is multiplied
     cout << "4 : Signed Magnitude Encoding\n";
     cout << "\t>Binary to Signed Magnitude(w=4)\n";
     cout << "\t\tB2U[1111] = "
          << (-1) * ((1 * (2 * 2 * 2)) + (1 * 2 * 2) + (1 * (2)) + (1))
          << '\n';
     cout << "\t>Range of Signed 4bit(nible)\n";
     cout << "\t\tThe greatest possible value with w=4 is SMAX[0111] = "
          << "7" << '\n';
     cout << "\t\tThe smalledt possible value with w=4 is SMIN[1111] = "
          << " -7 " << '\n';
     cout << "\t\tRepresentation of -0 with w=4 is = "
          << "1000 (In Binary)" << '\n';
     return 0;
}