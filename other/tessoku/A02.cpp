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
    int n, x;
    cin >> n >> x;
    vector<int> a(n, 0);
    rep(i, n) { cin >> a[i]; }

    auto result = find(a.begin(), a.end(), x);  //計算量は,o(n)
    if (result == a.end()) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
    // rep(i, n)
    // {
    //     if (a[i] == x) {
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    // }
    // cout << "No" << endl;
}