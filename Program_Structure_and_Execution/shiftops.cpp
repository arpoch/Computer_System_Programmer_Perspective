#include <iostream>
#include <limits.h>
using std::cout;

int main()
{
    //unsigned int lval = (2147483640 + 8); It will result in over-flow because value
    //inside the brackets is int i.e. 4bytes but adding 8 will result in 4bytes + 1 bit
    int lval = 0x80000000;
    int aval = 0x80;
    unsigned uval = 0x80000000;
    //------------------------------------------------------------------------------------
    cout << "logical Right Shift\n";
    cout << "Before Shift\n";
    printf("aval = %x\n", aval);
    printf("uval = %x\n", uval);
    aval >>= 31;
    uval >>= 2;
    cout << "After Shift\n";
    printf("aval = %x\n", aval);
    printf("uval = %xn", uval);
    //------------------------------------------------------------------------------------
    cout << "Arithmetic Right Shift\n";
    cout << "Before Shift\n";
    lval >>= 31;
    cout << "After Shift\n";
    printf("lval = %x\n", lval);
    //------------------------------------------------------------------------------------
    int lval = 0x80000000;
    int aval = 0x80;
    unsigned uval = 0x80000000;
    //------------------------------------------------------------------------------------
    cout << "left Shift\n";
    cout << "Before Shift\n";
    printf("lval = %x\n", lval);
    printf("aval = %x\n", aval);
    printf("uval = %x\n", uval);
    aval >>= 31;
    uval >>= 2;
    cout << "After Shift\n";
    printf("lval = %x\n", lval);
    printf("aval = %x\n", aval);
    printf("uval = %xn", uval);
    return 0;
}