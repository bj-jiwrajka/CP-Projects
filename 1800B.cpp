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
        ll k;
        cin >> k;
        string s;
        cin >> s;

        vector<int> uc(26), lc(26);
        for (int i = 0; i < n; i++)
        {
            if (islower(s[i]))
            {
                lc[s[i] - 'a']++;
            }
            else
            {
                uc[s[i] - 'A']++;
            }
        }
        ll sum = 0;
       
        for (int i = 0; i < 26; i++)
        {
            if (uc[i] < lc[i])
            {
                sum += uc[i];
                lc[i] -= uc[i];
                uc[i] = 0;

            }
            else
            {
                sum += lc[i];
                uc[i] -= lc[i];
                lc[i] = 0;

            }
        }
        //  cout<<uc[0]<<endl;
        // cout<<lc[0]<<endl;
        for (int i = 0; i < 26; i++)
        {
            if (uc[i] & 1)
            {
                uc[i]--;
            }
            if (lc[i] & 1)
            {
                lc[i]--;
            }
        }

        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < 26; i++)
        {
            sum1 += lc[i];
            sum2 += uc[i];
        }
        // for (int i = 0; i < 26; i++)
        // {
        //   cout<<lc[i]<<" ";
        // }
        // cout<<endl;
        
        // cout<<sum1<<" "<<sum2<<endl;
        ll fin = sum1 / 2 + sum2 / 2;
        ll fina;
        if (fin < k)
        {
            fina = fin;
        }
        else
        {
            fina = k;
        }

// cout<<sum<<endl
// cout<<fin<<endl;
        cout<<fina+sum<<endl;
    }
}