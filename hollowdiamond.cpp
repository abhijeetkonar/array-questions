#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // for the row
    {
        for (int j = 1; j <= n - i; j++) // for spacce before *
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) // for the * in this range
        {
            if (j == 1 || j == 2 * i - 1) // for the position of *
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++) // for the inverse pattern just range is inverse
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
