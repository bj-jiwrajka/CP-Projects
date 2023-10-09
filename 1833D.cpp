// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll mx = INT_MIN;
        ll ind;
        if(n==1)cout<<arr[0]<<endl;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
                ind = i;
            }
        }
        // cout<<ind<<endl;
        if (n!=1 and ind == n - 1)
        {
            // ll left = 0;
            ll right = ind - 1;
            while (right > 0 and arr[right] > arr[0])
            {
                right--;
                // break;
            }
            for (int i = ind; i > right; i--)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= right; i++)
            {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
        else if(n!=1)
        {
            for (int i = ind; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<arr[ind-1]<<" ";

            ll right = ind - 2;
            while (right > 0 and arr[right] > arr[0])
            {
                // cout<<arr[right]<<" ";
                right--;
                // break;

            }
            for (int i = ind-2; i > right; i--)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= right; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}