#include <bits/stdc++.h>
using namespace std;
// GOOGLE KICKSTART //
int main()
{
    int n;
    cin >> n;
    int a[n];
    // input the arry element
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;         // store the ans
    int d = a[1] - a[0]; // store the common difference
    int curr = 2;        // to check the size of current subarry
    int j = 2;           // for the while loop

    while (j < n)
    {
        if (a[j] - a[j - 1] == d) // if commom difference is equal
            curr++;
        else
        {
            curr = 2;
            d = a[j] - a[j - 1]; // if common difference is not equal
        }
        ans = max(curr, ans);
        j++; // not forgot to increment ; increament in starting of while loop
    }

    cout << ans << endl;

    return 0;
}
