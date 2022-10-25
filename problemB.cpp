// Name-Bijay Jiwrajka
// Scholar id -2112055
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
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        long long int sub = 0;
        long long int sib = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sub += s[i];
            }
            else
            {
                sib += s[i];
            }
        }
        if (sub <= sib)
        {
            cout << "SHUBHAM" << endl;
        }
        else
        {
            cout << "SHIVAM" << endl;
        }
    }
}