#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        vector<int> v;
        char ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                ans = i;
                v.push_back(ans);
            }
        }
        int index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'g')
            {
                index = i;
                break;
            }
        }
        // cout<<index<<endl;

        int new_ans = 0;
        int final_ans = 0;
        vector<int> v1;

        for (int j = 0; j < v.size(); j++)
        {

            for (int i = v[j]; i < s.length(); i++)
            {
                if (s[i + 1] == 'g')
                {
                    new_ans = i - ans;
                    v1.push_back(new_ans);
                }
            }
            if (new_ans == -1)
            {
                new_ans = n - v[j] + index;
                v1.push_back(new_ans);
            }
            new_ans = -1;
        }
        cout << *max_element(v1.begin(), v1.end()) << endl;
    }
}
