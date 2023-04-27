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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            if (arr[0] == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }

            continue;
        }

        ll mex = 0;

        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            brr[i] = arr[i];
        }

      
            sort(brr, brr + n);

        for (int i = 0; i < n; i++)
        {
            if (brr[i] == mex)
            {
                mex++;
            }
        }

        ll f = -1, l = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mex + 1)
            {
                f = i;
                break;
            }
        }
          ll cnti = 0;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] == i)
            {
                cnti++;
            }
        }
        if (cnti == n)
        {
            cout << "No" << endl;
            continue;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == mex + 1)
            {
                l = i;
                break;
            }
        }
        // cout<<f<<" "<<l<<" "<<endl;
        set<ll> s;
        for (int i = 0; i < f; i++)
        {
            if (arr[i] <=mex)
            {

                s.insert(arr[i]);
            }
        }
        for (int i = l + 1; i < n; i++)
        {
            if (arr[i] <= mex)
            {

                s.insert(arr[i]);
            }
        }
        // for(auto it: s){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        if (s.size() == mex)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}