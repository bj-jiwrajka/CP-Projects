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
       long long int int1 = 0;
       long long int int0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                int0++;
            }
            else
            {
                int1++;
            }
        }
        long long int ans = int0 * int1;
        // cout<<ans<<endl;
       long long int cnt = 1;
       long long int max_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' and s[i + 1] == '0')
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if (cnt > max_cnt)
            {
                max_cnt = cnt;
            }
        }
        long long int count = 1;
       long long int max_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' and s[i + 1] == '1')
            {
                count++;
            }
            else
            {

                count = 1;
            }

            if (count > max_count)
            {
                max_count = count;
            }
        }
        max_cnt *= max_cnt;
        max_count *= max_count;
        if (max_cnt >= ans and max_cnt >= max_count)
        {
            cout << max_cnt << endl;
        }
        else if (max_count >= ans and max_count >= max_cnt)
        {
            cout << max_count << endl;
        }
        else 
        {
            cout << ans << endl;
        }
    }
    return 0;
}
