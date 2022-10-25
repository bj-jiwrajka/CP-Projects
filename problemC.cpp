// Name-Bijay Jiwrajka
// Scholar id - 2112055
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        for (int i = b; i >0; i--)
        {
            if (c^i==a-i)
            {
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }
}
        