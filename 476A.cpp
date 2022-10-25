#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
    }
    else if (n == m)
    {
        cout << n << endl;
    }
    else if ((n / 2) % m != 0 and n > m and n%2==0)
    {
        cout << (n / 2) + m - (n / 2) % m << endl;
    }
     else if (((n+1) / 2) % m != 0 and n > m )
    {
        cout << (n/2)+m-((n/2)%m)<< endl;
    }
    else
    {
        cout << (n+1) / 2 << endl;
    }

    return 0;
}
