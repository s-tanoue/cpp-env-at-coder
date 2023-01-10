#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;

    vector<int> x(q, 0);
    rep(i, q) cin >> x[i];

    sort(a.begin(), a.end());
    rep(i, q)
    {
        auto it = lower_bound(a.begin(), a.end(), x[i]);
        auto res = distance(a.begin(), it);
        cout << res << endl;
    }
}