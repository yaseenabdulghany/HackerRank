#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
void solve() {
    unsigned int n, s, p, q, v;
    n = 100000000;
    s = 1232077670;
    p = 126810854;
    q = 1536183938;
    cin >> n >> s >> p >> q;
    unsigned int i, a0 = s, a = s, ap = 0, k = 0, kt = 0;
    v = pow(2, 31);
    for (i = 0; i < n; i++) {
        a = (a * p + q);
        a = a % v;
        if ((a == a0 || a == ap) && i != 0) {
            k = i + 1;
            break;
        }
        ap = a;
    }
    if (i == n) k = i;
    cout << k << "\n";
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
