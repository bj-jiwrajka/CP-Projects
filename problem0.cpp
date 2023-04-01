// Name-Bijay Jiwrajka
// Scholar ID-2112055

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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }


          int result = 0;
    for (int i = 0; i < n; i++)
    {
        int s = p[i].first;
        int x = p[i].second;
        while (result > s)
        {
            s += x;
        }
        result = max(result, s) + 1;
    }
        cout <<result<< endl;
    }
    return 0;
}