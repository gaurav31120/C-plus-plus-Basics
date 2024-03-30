#include <iostream>
using namespace std;

int main()
{
    // Typecasting = conversion of one data type to another in a program

    int num = 5;
    float x;
    x = float(num);
    cout << num << " " << x << endl; // 5 5

    float num2 = 5.25;
    int y;
    y = int(num2);
    cout << num2 << " " << y << endl; // 5.25 5

    return 0;
}

// Typecasting = we can convert small size type value to big size type value then there is no data loss.
// we can convert small big type value to small size type value then there is data loss.

// bool  --> char  --> int   --> double
// 1byte --> 2byte --> 4byte --> 8byte