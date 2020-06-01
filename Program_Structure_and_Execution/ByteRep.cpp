#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len)
{
    int i = 0;
    for (i; i < len; i++)
        printf("%.2x ", *(start + i));
    cout << endl;
}
void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(int *px)
{
    show_bytes((byte_pointer)&px, sizeof(px));
}
int main()
{
    cout << "Size of byte_pointer " << sizeof(byte_pointer) << " bytes" << endl;
    int val = 12345;
    float valf = (float)val;
    int *px = &val;
    const char *m = "mnopqr";
    cout << "-----------------------------------------\n";
    cout << "Byte Representation of int = " << val << '\n';
    show_int(val);
    cout << "Byte Representation of float = " << valf << '\n';
    show_float(valf);
    cout << "Byte Representation of int* = " << px << '\n';
    show_pointer(px);
    cout << "Byte Representation of string = "
         << "12345" << '\n';
    show_bytes((byte_pointer) "12345", 6);
    cout << "Byte Representation of string = " << m << '\n';
    show_bytes((byte_pointer)&m, strlen(m));
    int a = 0x12345678;
    cout << "Byte Representation of int = " << a << '\n';
    byte_pointer ap = (byte_pointer)&a;
    show_bytes(ap, 2);
    return 0;
}