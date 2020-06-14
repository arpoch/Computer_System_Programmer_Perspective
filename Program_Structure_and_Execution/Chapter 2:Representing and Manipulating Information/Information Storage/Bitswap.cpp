#include <iostream>
using namespace std;
void inplace_swap(int *x, int *y)
{
    cout << "===================\n";
    *y = *y ^ *x;
    cout << "Step_1\n y =  " << *y << endl;
    *x = *x ^ *y;
    cout << "Step 2\n x = " << *x << endl;
    *y = *x ^ *y;
    cout << "Step 3\n y = " << *y << endl;
    cout << "===================\n";
}
int main()
{
    int a = 10, b = 20;
    cout << "Before replace \nA=" << a << " B = " << b << endl;
    inplace_swap(&a, &b);
    cout << "After replace \nA=" << a << " B = " << b << endl;
    return 0;
}