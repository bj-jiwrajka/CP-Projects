#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ind = n * a;
    if (n % m == 0)
    {
        int price = (n / m) * b;
        if (price >= ind)
        {
            cout << ind << endl;
        }
        else
        {
            cout << price << endl;
        }
    }

    else
    {
        int newprice = (n / m) * b + (n - (n / m) * m) * a;
        int bania=((n / m)+1) * b;
        if ( ind<= newprice and ind <=bania)
        {
            cout << ind << endl;
        }
        else if ( bania<=newprice and bania<=ind)
        {
            cout << bania << endl;
        }
        else
        {
            cout << newprice << endl;
        }
    }
    return 0;
}