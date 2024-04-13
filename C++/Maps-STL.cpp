#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1e6;
void solve(){
    int q ;
    cin >> q ;
    map<string ,int>mp;
    while (q--){
        int x ;
        cin >> x;
        string s ;
        cin >> s ;
        if(x==1){
            int y ;
            cin >> y;
            mp[s]+=y;
        }
        if(x==2){
            mp[s]=0;
        }
        if(x==3) {
            cout<<mp[s]<<"\n";
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
