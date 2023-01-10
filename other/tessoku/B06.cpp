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
    vector<int> a(n + 1, 0);
    rep1(i, n) { cin >> a[i]; }

    int q;
    cin >> q;
    vector<int> l(q + 1, 0);
    vector<int> r(q + 1, 0);
    rep1(i, q) { cin >> l[i] >> r[i]; }

    vector<int> atari(n + 1, 0);
    atari[0] = 0;

    vector<int> hazure(n + 1, 0);
    hazure[0] = 0;
    rep1(i, n)
    {
        if (a[i] == 1) {
            atari[i] = atari[i - 1] + 1;
            hazure[i] = hazure[i - 1];
        }
        else {
            hazure[i] = hazure[i - 1] + 1;
            atari[i] = atari[i - 1];
        }
    }

    rep1(i, q)
    {
        int hN = hazure[r[i]] - hazure[l[i] - 1];
        int aN = atari[r[i]] - atari[l[i] - 1];
        if (hN < aN) {
            cout << "win" << endl;
        }
        else if (hN > aN) {
            cout << "lose" << endl;
        }
        else {
            cout << "draw" << endl;
        }
    }
}
