#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
void solve() {
    int n ;
    cin >> n;
    n %= 1000000007;
    int res = n*n % 1000000007;
    cout << res << "\n";
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t=1 ;
    cin>>t ;
    while (t--) solve();
    return 0;
}
