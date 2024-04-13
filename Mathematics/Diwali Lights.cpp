#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int power(int k) {
    int ans = 1;
    for(int i = 0; i < k; i++) {
        ans = (ans * 2) % 100000;
    }
    return ans;
}
void solve() {
    int n ;
    cin >> n ;
    cout << (power(n) - 1 + 100000) % 100000 <<"\n";
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
