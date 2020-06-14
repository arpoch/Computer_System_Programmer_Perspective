//Replicating the | and ^ operations
#include <iostream>
using std::cout;

int bis(int x, int m)
{
}
int bic(int x, int m)
{
}
int bool_or(int x, int y)
{
    int result = bis(x, y);
    return result;
}
int main()
{
    int x = 0x00AD;
    int y = 0x00BC;
    printf("Value of x = %x , y = %x", x, y);
    cout << "Performing Bitwise OR operation\n";
    printf(" x|y  =  %x", bool_or(x, y));
    return 0;
}