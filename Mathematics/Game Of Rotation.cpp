#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int a[1000000];
void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (long long) (i + 1) * a[i];
    int rees = ans;
    for (int i = 0; i < n; i++){
        ans -= sum;
        ans += (int) n * a[i];
        if (ans > rees) rees = ans;
    }
    cout << rees << "\n";
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
