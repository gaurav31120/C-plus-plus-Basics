// Print hollow rectangle pattern

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter length of rect: " << endl;
    cin >> row;
    cout << "Enter width of rect: " << endl;
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
            {
                cout << "* ";
            }
            else if (j == 0 || j == col - 1)
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