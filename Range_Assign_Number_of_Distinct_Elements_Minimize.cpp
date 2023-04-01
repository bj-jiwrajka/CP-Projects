
//wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ini = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                ini = i;
            }
        }
        if ((arr[n - 1] == arr[ini + 1]) or ini == n - 1 or ini == n - 2 or arr[1]==arr[n-1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}