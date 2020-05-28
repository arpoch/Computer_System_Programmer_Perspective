#include <iostream>
#include <string.h>
using namespace std;

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
void show_pointer(int *px){
    show_bytes((byte_pointer)&px, sizeof(px));
}
int main()
{
    cout << "Size of byte_pointer " << sizeof(byte_pointer) << " bytes" << endl;
    int val=12345;
    float valf=(float)val;
    int *px = &val;
    const char *m="mnopqr";
    show_int(val);
    show_float(valf);
    show_pointer(px);
    show_bytes((byte_pointer)"12345",6);
    show_bytes((byte_pointer)&m,strlen(m));
    return 0;
}