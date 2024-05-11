// Print hollow inverted half pyramid pattern

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of pyramid: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (i == 0 || i == size - 1 || i == size - 2 || j == 0 || j == size - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
// output will be like this
//  * * * * * *
//  *       *
//  *     *
//  *   *
//  * *
//  *