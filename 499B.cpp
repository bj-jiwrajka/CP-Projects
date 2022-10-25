#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v; // m
    vector<string> v2;              // n
    string s1, s2, s;
    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        v.push_back({s1, s2});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v2.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (v2[i] == v[j].first and v[j].second.length() < v[j].first.length())
            {
                v2[i] = v[j].second;
            }
            else if (v2[i] == v[j].second and v[j].first.length() < v[j].second.length())
            {
                v2[i] = v[j].first;
            }
        }
    }
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}