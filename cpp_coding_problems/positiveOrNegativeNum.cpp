// Find if the number is postive or negative or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << "The number is: ";
    if (num > 0)
        cout << "positive";
    else if (num < 0)
        cout << "negative";
    else
        cout << "zero";

    return 0;
}