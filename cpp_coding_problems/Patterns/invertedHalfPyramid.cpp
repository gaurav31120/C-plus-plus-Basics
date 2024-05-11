// Print inverted half pyramid pattern

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of pyramid: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= size - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// output will be like this
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *