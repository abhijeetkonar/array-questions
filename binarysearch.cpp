#include <bits/stdc++.h>
using namespace std;

int binaryserach(int arr[], int n, int key)
{

    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            e = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the arry" << endl;
    cin >> n;

    int ary[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }

    int key;
    cout << " entern the key" << endl;
    cin >> key;

    cout << binaryserach(ary, n, key);

    return 0;
}
