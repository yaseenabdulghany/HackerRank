#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int f[2001][2001];
void pre(){
    f[1][0] = f[1][1] = 1;
    for (int i = 2; i <= 2000; i++){
        f[i][0] = f[i][i] = 1;
        for (int j = 1; j < i; j++)
            f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % 1000000000;
    }
}
void solve() {
    int n, k;
    cin >> n >> k;
    cout << f[n + k - 1][n - 1] << "\n";
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    pre();
    int t=1 ;
    cin>>t ;
    while (t--  ) solve();
    return 0;
}
