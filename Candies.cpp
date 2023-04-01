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
        long long int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2 * n);

        long long int cnt = 1;
        long long int maxcnt = 0;
      
            for (int i = 0; i < 2 * n ; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    cnt++;
                }
                else
                {
                    cnt = 1;
                }

                if (cnt > maxcnt)
                {
                    maxcnt = cnt;
                }
            }
            // cout<<maxcnt<<endl;
            if (maxcnt >2)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
       
           
        }
    
}