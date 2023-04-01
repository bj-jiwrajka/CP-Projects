#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int n, alice, bob, ans;
int a[MAXN], alice_sum[MAXN], bob_sum[MAXN];
vector<int> adj[MAXN];

void dfs(int u, int p, int d) {
if (d % 2 == 0 && d > 0)
alice_sum[u] = a[u];
else
bob_sum[u] = a[u];
for (int v : adj[u]) {
if (v != p) {
dfs(v, u, d + 1);
alice_sum[u] += bob_sum[v];
bob_sum[u] += alice_sum[v];
}
}
}

void solve(int u, int p, int d, int alice_sum_par, int bob_sum_par) {
int cur_sum = alice_sum_par + bob_sum_par + alice_sum[u] + bob_sum[u];
if (cur_sum > ans) {
ans = cur_sum;
alice = alice_sum_par + alice_sum[u];
bob = bob_sum_par + bob_sum[u];
}
for (int v : adj[u]) {
if (v != p) {
solve(v, u, d + 1, alice_sum_par + bob_sum[u] - bob_sum[v], bob_sum_par + alice_sum[u] - alice_sum[v]);
}
}
}

int main() {
cin >> n;
for (int i = 1; i <= n; i++)
cin >> a[i];
for (int i = 1; i < n; i++) {
int u, v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);
}
dfs(1, 0, 0);
ans = alice_sum[1] + bob_sum[1];
alice = alice_sum[1];
bob = bob_sum[1];
solve(1, 0, 0, 0, 0);
cout << ans << " " << alice << " " << bob << "\n";
return 0;
}
