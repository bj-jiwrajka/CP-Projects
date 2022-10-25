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
        string s1, s2;
        cin >> s1 >> s2;
        int a1[27] = {0}, a2[27] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            a1[int(s1[i]) - 97]++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            a2[int(s2[i]) - 97]++;
        }
        vector<int> v;
        int min = 0;
        for (int i = 0; i < 27; i++)
        {
            if (a1[i] < a2[i])
            {
                min = a1[i];
            }
            else
            {
                min = a2[i];
            }
            v.push_back(min);
        }
        cout << *max_element(v.begin(), v.end()) << endl;
    }
}