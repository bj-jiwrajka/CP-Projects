#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll count = 0;
        ll max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0 and brr[i] != 0)
            {
                count++;
               if (count>max)
               {
                max=count;
               }
               
            }
            else
            {
                count = 0;
            }
        }

        cout << max << endl;
    }
}