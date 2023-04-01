// // Let's begin
// #include <bits/stdc++.h>
// // #include<appiness.h>
// using namespace std;
// #define md 1000000007
// #define pb push_back
// #define ll long long
// #define fr(i, n) for (ll i = 0; i < n; i++)
// #define inp(v)
// #define all(x) (x).begin(), (x).end()
// typedef long double lld;
// // int maxan(int n, int k, vector<int> &a, vector<int> &b)
// // {

// // }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll k;
//         cin >> k;
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//          vector<pair<int, int>> problems(n);
//     for (int i = 0; i < n; i++)
//     {
//         problems[i] = make_pair(a[i] + b[i], i);
//     }
//     sort(problems.begin(), problems.end());
//     int tl = k, solved = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (problems[i].first > tl)
//         {
//             if (a.at(solved) <= tl)
//             {
//                 solved++;
//                 break;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         else{
//         tl -= problems[i].first;
//         a.at(problems[i].second) = 0; //check

//         sort(a.begin(), a.end());
//         // int it = *a.begin() + problems[i].second;
//         // *a.erase(it);

//         solved++;
//         }

//     }
//     cout<< solved<<endl;
//         // cout << maxan(n, k, a, b) << endl;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> problems;
        for (int i = 0; i < n; i++)
        {
            problems.push_back(make_pair(a[i] + b[i], b[i]));
        }
        sort(problems.begin(), problems.end());
        int solved = 0;
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            int problem_time = problems[i].first;
            int break_time = problems[i].second;
            if (time + problem_time <= k)
            {
                solved++;
                time += problem_time;
            }
            else
            {
                break;
            }
        }
        cout << solved << endl;
    }
    return 0;
}
