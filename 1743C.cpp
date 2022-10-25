#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v2;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 0)
            {
                v.push_back(i);
            }
        }
        int ans, sum = 0, final_ans;
        int min;
        for (int i = 0; i < v.size() - 1; i++)
        {

                min=*min_element(v2.begin()+v[i],v2.begin()+v[i+1]-1);
            
            sum = accumulate(v2[v[i]], v2[v[i + 1] - 1], 0);
            final_ans =final_ans+ sum - ans;

        }
    }
    return 0;
}
