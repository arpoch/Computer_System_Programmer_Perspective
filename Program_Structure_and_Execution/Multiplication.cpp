#include <iostream>
#include <math.h>
using std::cout;
int main()
{
    cout << "Multiplication Operation\n";
    cout << "Unsigned Multiplication\n";
    uint8_t us_x = 0x06;
    uint8_t us_y = 0x03;
    uint32_t power = pow(2, 3);
    cout << "Implicit Multiplication of x = " << us_x << " ,y = " << us_y << " is "
         << (us_x * us_y) << '\n';
    cout << "Explicit Multiplication of x and y = " << ((us_x * us_y) % power) << '\n';
    cout << "Signed Multiplication\n";
    int8_t s_x = -3;
    int8_t s_y = 0x03;
    cout << "Implicit Multiplication of x = " << (int)s_x << " ,y = " << (int)s_y << " is "
         << (s_x * s_y) << '\n';
    cout << "Explicit Multiplication of x and y = " << ((s_x * s_y) % power) << '\n';
    cout << "Multiplication by constant\n";
    cout << "Unsigned Multiplication by power of 2\n";
    uint32_t un_s32 = 11;
    cout << "Multiplying " << un_s32 << " by 8 (lefting shifting the number by the zeros)\n";
    un_s32 <<= 3;
    cout << "11 * 8 = " << un_s32 << "\n";
    cout << "Signed Multiplication by power of 2\n";
    int32_t s_n32 = -11;
    cout << "Multiplying " << s_n32 << " by 8 (lefting shifting the number by the zeros)\n";
    s_n32 <<= 3;
    cout << "-11 * 8 = " << s_n32 << "\n";
    return 0;
}