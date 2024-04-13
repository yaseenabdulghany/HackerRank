#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1000000007, INF=0X3F3F3F3F , MAX= 1005;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v)cin >> i;
    while (v.size() > 1) {
        int first=v[0] , second= v[1];
        v[0] =first+second+(first*second%MOD);
        v[0]%=MOD;
        v.erase(v.begin()+1);
    }
    cout<<v[0]%MOD;
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t=1 ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
