#include <iostream>
using std::cout;
using std::endl;

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}
void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         first < last;
         first++, last--)
        inplace_swap(&a[first], &a[last]);
}
void display(int *a, int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << '\t';
    }
    cout << '\n';
}
int main()
{
    int int_array[5] = {1, 2, 3, 4};
    cout << "Before Swap\n";
    display(int_array, 4);
    cout << "After Swap\n";
    reverse_array(int_array, 4);
    display(int_array, 4);
    return 0;
}