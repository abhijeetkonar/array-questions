#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    int fibo_first = 0, fibo_second = 1, fibo_next;
    int lucas_first = 2, lucas_second = 1, lucas_next;
    cout << "Enter the number";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            a[i] = 0;
        }
        else if (i == 1)
        {
            a[i] = 2;
        }
        else if (i == 2)
        {
            a[i] = 1;
        }
        else if (i == 3)
        {
            a[i] = 1;
        }
        else if (i % 2 == 0)
        {

            fibo_next = fibo_first + fibo_second;
            a[i] = fibo_next;
            fibo_first = fibo_second;
            fibo_second = fibo_next;
        }
        else
        {
            lucas_next = lucas_first + lucas_second;
            a[i] = lucas_next;
            lucas_first = lucas_second;
            lucas_second = lucas_next;
        }
    }

    cout << a[n];
    return 0;
}
