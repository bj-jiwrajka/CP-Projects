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
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int count = 0;
    
        int arr[100001]={0};
        for (int i = 0; i < n; i++)
        {
         arr[s[i]-1]++;
        }
        int max=arr[0];
        for (int i = 0; i < 100001; i++)
        {
           if (arr[i]>max)
           {
        max=arr[i];
           }
           
        }
        

        for (int i = 0; i < n; i++)
        {
            if ( (s[i] % 2 == 0 and s[i + 1] % 2 != 0 and s[i + 1] - s[i] == 1))
            {
                max++;
            }
        }
        cout<<n-max<<endl;

    }
}