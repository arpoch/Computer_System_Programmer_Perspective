#include <iostream>
#include <math.h>
using std::cout;

int main()
{
    cout << "Turncation\n";
    cout << "Turncation of Unsigned number \n";
    uint32_t us_val = 0xCFC7;
    int32_t power = pow(2, 10);
    cout << "Value of us_val = " << us_val << '\n';
    cout << "Turncation of us_val upto 10bits = " << (us_val % power) << '\n';
    cout << "Turncation of Signed number\n";
    int32_t s_val = 0xCFC7;
    power = pow(2, 16);
    cout << "Value of us_val = " << s_val << '\n';
    if ((s_val % power) > INT16_MAX)
    {
        cout << "Turncation of s_val upto 16bits = " << (s_val % power) - (2 * INT16_MAX + 2) << '\n';
    }
    else
    {
        cout << "Turncation of s_val upto 16bits = " << (s_val % power) << '\n';
    }
    return 0;
}