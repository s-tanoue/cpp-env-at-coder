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
    string ans;

    while (n >= 2) {
        // ans.insert(0, n % 2, 1);
        auto stringN = to_string(n % 2);
        ans.insert(0, stringN);
        n /= 2;
    }

    ans.insert(0, to_string(n));

    auto times = ans.size();

    string zero;
    rep(i, 10 - times) { zero += '0'; }
    ans.insert(0, zero);

    cout << ans << endl;

    return 0;
}
