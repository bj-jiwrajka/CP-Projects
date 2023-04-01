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
        ll m, n;
        cin >> m >> n;
        string s, p;
        cin >> s >> p;

        ll arr[26] = {0};
        // cout<<result<<endl;
        bool flag = 1;
        if (m > n)
        {
            for (int i = 0; i < s.size(); i++)
            {
                arr[int(s[i]) - 97]++;
            }

            for (int i = 0; i < p.size(); i++)
            {
                if (arr[int(p[i]) - 97] > 0)
                {
                    arr[int(p[i]) - 97]--;
                }
                else
                {
                    flag = 0;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        else
        {

            for (int i = 0; i < p.size(); i++)
            {
                arr[int(p[i]) - 97]++;
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (arr[int(s[i]) - 97] > 0)
                {
                    arr[int(s[i]) - 97]--;
                }
                else if (arr[int(s[i]) - 97] == 0)
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
        }

        ll cnt = 0;

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] & 1)
            {
                cnt++;
            }
        }
        if (flag && cnt > 1)
        {
            flag = 0;
            cout << "NO" << endl;
        }

        if (flag)
            cout << "YES" << endl;

        // for (int i = 0; i < 26; i++)
        // {
        //   cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }
}
