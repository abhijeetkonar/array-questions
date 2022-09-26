#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;

    // for the upper part
    for (int i = 1; i <= n; i++) // for the nummber of row
    {
        for (int j = 1; j <= i; j++) // for the first part *
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++) // for the space between two parts of *
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // for the second  part *
        {
            cout << "*";
        }
        cout << endl;
    }

    // for the lower part
    for (int i = n; i >= 1; i--) // just the range is reverse
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
