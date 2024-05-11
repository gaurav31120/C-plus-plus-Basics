// Print rectangle pattern

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
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}