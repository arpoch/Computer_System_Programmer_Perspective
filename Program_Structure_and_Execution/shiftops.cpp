#include <iostream>
#include <limits.h>
using std::cout;

int main()
{
    //unsigned int lval = (2147483640 + 8); It will result in over-flow because value
    //inside the brackets is int i.e. 4bytes but adding 8 will result in 4bytes + 1 bit
    int lval = 0x80;
    int aval = 0xFEDCBA98;
    unsigned uval = 0x80000000;
    cout << lval << '\n';
    cout << "Before Shift\n";
    printf("lval = %x\n", lval);
    printf("aval = %x\n", aval);
    printf("uval = %x\n", uval);
    lval >>= 31;
    aval = 0xFEDCBA98 >> 31;
    uval >>= 2;
    printf("lval = %u\n", lval);
    printf("aval = %x\n", aval);
    printf("uval = %d\n", uval);
    return 0;
}