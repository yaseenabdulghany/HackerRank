#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1e6;
void solve(){
    int q ;
    cin >> q ;
    set<int>st;
    while (q--){
        int x , val;
        cin >> x >> val ;
        if(x==1){
            st.insert(val);
        }
        if(x==2)st.erase(val);
        if(x==3){
            if(st.count(val))cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
