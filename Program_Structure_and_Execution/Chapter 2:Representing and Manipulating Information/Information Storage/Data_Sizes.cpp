//Bytes allocated to Integral Data types
#include <iostream>
using std::cout;
int main()
{
    cout << "Signed Intergral Data Types || Unsigned Integral Data Types\n";

    cout << "Signed Char = " << sizeof(signed char) << "byte || "
         << "Unsigned Char = " << sizeof(unsigned char) << "byte \n";

    cout << "Signed short = " << sizeof(signed short) << "bytes || "
         << "Unsigned short = " << sizeof(unsigned short) << "bytes \n";

    cout << "Signed int = " << sizeof(signed int) << "bytes || "
         << "Unsigned int = " << sizeof(unsigned int) << "bytes \n";

    cout << "Signed long = " << sizeof(signed long) << "bytes || "
         << "Unsigned long = " << sizeof(unsigned long) << "bytes \n";

    cout << "Signed long long= " << sizeof(signed long long) << "bytes || "
         << "Unsigned long long = " << sizeof(unsigned long long) << "bytes \n";

    cout << "Signed int32_t = " << sizeof(signed int32_t) << "bytes || "
         << "Unsigned int64_t = " << sizeof(unsigned int64_t) << "bytes \n";

    cout << "Signed char* = " << sizeof(signed char *) << "bytes || "
         << "Unsigned char* = " << sizeof(unsigned char *) << "bytes \n";

    cout << "Signed float = " << sizeof(float) << "bytes \n";

    cout << "Signed double = " << sizeof(double) << "bytes \n";

    return 0;
}