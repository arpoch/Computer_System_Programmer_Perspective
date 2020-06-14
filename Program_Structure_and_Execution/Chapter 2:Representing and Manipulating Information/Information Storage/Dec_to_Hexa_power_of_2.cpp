#include <iostream>
#include <math.h>
using std::cout;

int main()
{
    uint32_t dec_val = 33554432;
    cout << "Unsigend value of dec_val = " << dec_val << '\n';
    float power = log2f32((float)dec_val);
    int zeros = (int)(power / 4);
    int digit = fmod(power, 4);
    if (digit == 0)
        digit = 1;
    else if (digit == 1)
        digit = 2;
    else if (digit == 2)
        digit = 4;
    else if (digit == 3)
        digit = 8;
    zeros = pow(10, zeros);
    cout << "Hexadeciaml value of dec_val = 0x" << digit * zeros << '\n';
    return 0;
}