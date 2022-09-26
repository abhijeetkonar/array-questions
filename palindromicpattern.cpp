#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the number  ";
    cin >> n;

    for (int i = 1; i <= n; i++) // for the row
    {
        int j;                       // for the column
        for (j = 1; j <= n - i; j++) // for the spce in column
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++) // for front part of triangle in decreacing order
        {
            cout << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++) // for last part of triangle  in increasing order
        {
            cout << k++;
        }

        cout << endl;
    }
    return 0;
}
