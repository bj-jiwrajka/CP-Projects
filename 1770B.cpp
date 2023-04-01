#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if(n&1)
        {
            for (int i = 0; i < n/2; i++)
            {
                cout<<n-i<<" "<<i+1<<" ";
            }

            
            cout << n/2 +1<< endl;
        }
        else
        {
            
            for (int i = 0; i < n/2; i++)
            {
                cout<<n-i<<" "<<i+1<<" ";
            }
            cout<<endl;
        }
        
    }
}