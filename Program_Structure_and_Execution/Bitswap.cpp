#include <iostream>
using namespace std;
void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    cout<<"Step_1 "<<*y<<endl;
    *x = *x ^ *y;
    cout<<"Step 2 "<<*x<<endl;
    *y = *x ^ *y; 
    cout<<"Step 3 "<<*y<<endl;
}
int main(){
    int a =10 , b = 20;
    cout<<"Before replace \nA="<<a<<" B="<<b<<endl;
    inplace_swap(&a,&b);
    cout<<"After replace \nA="<<a<<" B="<<b<<endl;
    return 0;
}