// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         if (n == 1)
//         {
//             cout << 1 << " " << 1 << endl;
//         }
//         else
//         {

//             int brr[100001] = {0};
//             for (int i = 0; i < n; i++)
//             {
//                 brr[arr[i] - 1]++;
//             }
//             int l, r;
//             for (int i = 0; i < n; i++)
//             {
//                 if (brr[arr[i] - 1] > 1)
//                 {
//                     r = i;
//                 }
//             }
//             // cout<<l<<endl;
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 if (brr[arr[i] - 1] > 1)
//                 {
//                     l = i;
//                 }
//             }
//             cout << l + 1 << " " << r + 1 << endl;
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while (t--)
{
int n;
cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<1<<" "<<n<<endl;
}
return 0;
}