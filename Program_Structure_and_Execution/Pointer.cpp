#include <iostream>
using std::cout;

int main()
{
    char *ch = nullptr;
    int var{0};
    var = *ch;
    cout << var << '\n';
}