#include <iostream>
#include <iomanip>
using std::cout;

int main()
{
     unsigned int x = 0x87654321;
     unsigned int y{0};
     //When we want to keep the desired bits we use & with 1 else 0 to discard(intersection)
     int mask = 0xFF;
     cout << "X = " << std::setbase(16) << x
          << ",Mask = " << std::setbase(16) << mask << '\n';
     cout << x << " & " << mask << " = ";
     y = x & mask;
     cout << std::setbase(16) << y << '\n';
     //When we want complement/inverse certain bits we use ^
     y = x;
     mask = ~0xff;
     cout << "X = " << std::setbase(16) << x
          << ",Mask = " << std::setbase(16) << mask << '\n';
     cout << x << " & " << mask << " = ";
     y = x ^ mask;
     cout << std::setbase(16) << y << '\n';
     y = x & mask;
     cout << std::setbase(16) << y << '\n';
     //When we want union we use |
     y = x;
     mask = 0xFF;
     cout << "X = " << std::setbase(16) << x
          << ",Mask = " << std::setbase(16) << mask << '\n';
     cout << x << " & " << mask << " = ";
     y = x | mask;
     cout << std::setbase(16) << y << '\n';
     return 0;
}