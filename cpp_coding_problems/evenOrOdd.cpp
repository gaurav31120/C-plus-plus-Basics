// Find the number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "The number is: ";
    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}