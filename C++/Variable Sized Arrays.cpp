#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
void solve(){
    int n , q ;
    cin >> n >> q ;
    vector<vector<int>>v;
    for (int i = 0; i < n ; ++i) {
        int m ;
        cin >> m ;
        vector<int>rows;
        while (m--){
            int x ;
            cin >> x;
            rows.push_back(x);
        }
        v.push_back(rows);
        rows.clear();
    }
    while (q--){
        int r , c ;
        cin >> r >> c;
        cout<<v[r][c]<<"\n";
    }

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
