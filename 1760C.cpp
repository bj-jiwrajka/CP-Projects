#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long  int n;
        cin >> n;
        vector<long long int> s;
        for (int i = 0; i < n; i++)
        {
            long  long int a;
            cin>>a;
            s.push_back(a);
            // cin >> s[i];
        }
vector<long long int> v=s;
sort(v.begin(), v.end());

        long long int max = v[n-1];

        for (int i = 0; i < n; i++)
        {
            if (s[i] != max)
            {
                cout << s[i] - max <<" ";
            }
            else
            {
                cout << s[i]-v[n-2]<<" ";
            }
        }
        cout<<endl;
    }
}