// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[30] = {0};
        bool chk = 1;
        ll cnt = -1;

        for (ll i = 1; i <= 30; i++)
        {
            arr[i - 1] = pow(2, i);
        }

        // for (int i = 0; i < 31; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        
        if (n == 1 or n == 6 or n == 4)
        {
            cout << "FastestFinger\n";
        }
        else if (n == 2 or n & 1)
        {
            cout << "Ashishgup\n";
        }
        else

        {
            for (int i = 0; i < 30; i++)
            {
                if (n == arr[i])
                {
                    cout << "FastestFinger\n";
                    chk = 0;
                    break;
                }
            }

            if (chk and n % 4 == 0)
            {
                cout << "Ashishgup\n";
                continue;
            }
            if (chk)
            {

                ll p = n / 2;
                int c = 2;
                while (n > 1)
                {
                    if (n % c == 0)
                    {
                        cnt++;
                        n /= c;
                    }
                    else
                        c++;
                }
                if (cnt > 1)
                {
                  cout << "Ashishgup\n"; 
                }
                // else
                // {
                //     cout << "Ashishgup\n";
                // }
            }
        }
    }
}