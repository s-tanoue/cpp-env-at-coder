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
    int d, n;
    cin >> d >> n;
    vector<int> l(n + 1, 0);
    vector<int> r(n + 1, 0);

    rep1(i, n) { cin >> l[i] >> r[i]; }
    vector<int> s(d + 1, 0);

    rep1(i, n)
    {
        s[l[i]] += 1;
        s[r[i] + 1] -= 1;
    }

    vector<int> ans(d + 1, 0);
    rep1(i, d) { ans[i] = ans[i - 1] + s[i]; }
    rep1(i, d) cout << ans[i] << endl;

    return 0;
}
