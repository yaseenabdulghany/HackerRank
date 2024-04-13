#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int powmod(int x, int k, int MOD) {
    int p = 1;
    if (k == 0) return p;
    if (k == 1) return x;
    while (k != 0) {
        if (k % 2 == 1) {
            p = (p * x) % MOD;
        }
        x = (1LL * x * x) % MOD;
        k /= 2;
    }
    return p;
}
void solve() {
    int n;
    cin >> n;
    int answer = 1;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        answer = (answer * (powmod(2, num, MOD) + 1)) % MOD;
    }
    cout << (answer - 1 + MOD) % MOD << "\n";
}
int32_t main() {
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t = 1;
//    cin >> t;
    while (t--) solve();
    return 0;
}
