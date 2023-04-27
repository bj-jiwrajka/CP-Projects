#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPerfectSquare(long double x)
{
    ll sr = sqrt(x);
    return (sr * sr == x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<ll, ll> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        ll cnt = 0;

        // cout<<endl;
        cout << cnt << endl;
    }

    return 0;
}




