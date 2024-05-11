// Print numeric half pyramid pattern

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of pyramid: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
// output will be like this
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5