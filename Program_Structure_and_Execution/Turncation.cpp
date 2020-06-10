#include <iostream>
#include <math.h>
using std::cout;

int main()
{
    cout << "Turncation\n";
    cout << "Turncation of Unsigned number \n";
    int32_t us_val = 0xCFC7;
    int16_t power = pow(2, 10);
    cout << "Value of us_val = " << us_val << '\n';
    cout << "Turncation of us_val upto 10bits = " << (us_val % power) << '\n';
    return 0;
}