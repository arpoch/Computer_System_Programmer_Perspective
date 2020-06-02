#include <iostream>
using std::cout;
int main()
{
    int32_t value = -1;
    int result;
    for (int i = 31; i >= 0; i--)
    {
        {
            uint32_t mask = 0x01;
            mask <<= i;
            if (value & mask)
                result = 1;
            else
                result = 0;
        }
        cout << result;
    }
    //cout << result << '\n';
    return 0;
}