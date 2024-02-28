//Name - Bijay Jiwrajka
//Scholar ID - 2112055
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a)  ll a; cin>>a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
int f(int a, int b)
{
    if(b==0) return 0;
    if(b%2==0) return f(a+a,b/2);
    return f(a+a, b/2)+a;

    }
typedef long double lld;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout<< f(2,9)<<endl;

}