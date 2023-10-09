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
        stack<char> st;
        for (int i =0;i<n ;i++)
        {

            if (s[i] == 'Q')
            {
               st.push(s[i]);
            }
            else if(!st.empty())
            {
                st.pop();
            }
         
        }
        if (st.size()> 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}