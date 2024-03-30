#include <iostream>
using namespace std;

// Find the greatest number between two numbers
int main()
{
    int firstNum, secondNum;
    cout << "Enter your first number: ";
    cin >> firstNum;
    cout << "Enter your second number: ";
    cin >> secondNum;

    cout << "The greater number is: ";
    if (firstNum > secondNum)
    {
        cout << firstNum;
    }
    else
    {
        cout << secondNum;
    }

    return 0;
}