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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> x(h + 1, vector<int>(w + 1, 0));
    rep1(i, h) rep(j, w) { cin >> x[i][j]; }

    int q;
    cin >> q;
    vector<int> A(q + 1, 0);
    vector<int> B(q + 1, 0);
    vector<int> C(q + 1, 0);
    vector<int> D(q + 1, 0);
    rep1(i, q) { cin >> A[i] >> B[i] >> C[i] >> D[i]; }

    vector<vector<int>> s(h + 1, vector<int>(w + 1, 0));
    rep1(i, h) rep1(j, w) s[i][j] = s[i][j - 1] + x[i][j];
    rep1(i, h) rep1(j, w) s[i][j] = s[i - 1][j] + s[i][j];
    rep1(i, q) cout << s[C[i]][D[i]] + s[A[i] - 1][B[i] - 1] - s[A[i] - 1][D[i]] - s[C[i]][B[i] - 1]
                    << endl;
}
