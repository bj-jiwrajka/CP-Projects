#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    int x, y;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (s < v[i].first)
    //     {
    //         cout << "NO" << endl;
    //         return 0;
    //     }
    //     else
    //     {
    //         s = s + v[i].second;
    //     }
    // }
    int sum = 0;
    int sum2 = 0;
    if (n==1)
    {
        if (s>=v[0].first)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    else
    {
    for (int i = 0; i < n - 1; i++)
    {
        sum += v[i].second;
        sum2 += v[i].first;
    }

    if (sum + s > sum2+v[n-1].second)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }
    }
    return 0;
}