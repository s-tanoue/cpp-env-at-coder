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
    int t, n;
    cin >> t >> n;
    vector<int> l(n + 1, 0);
    vector<int> r(n + 1, 0);

    rep(i, n) { cin >> l[i] >> r[i]; }
    vector<int> s(t + 1, 0);

    rep(i, n)
    {
        s[l[i]] += 1;
        s[r[i]] -= 1;
    }

    vector<int> ans(t + 1, 0);
    rep(i, t)
    {
        if (i == 0) {
            ans[i] = s[i];
        }
        else {
            ans[i] = ans[i - 1] + s[i];
        }
    }
    rep(i, t) cout << ans[i] << endl;
    return 0;
}