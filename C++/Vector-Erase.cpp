#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1e6;
void solve(){
    int n ;
    cin >> n ;
    vector<int>v,ans;
    for (int i = 0; i < n; ++i) {
        int x ;
        cin >> x;
        v.push_back(x);
    }
    int q , a , b ;
    cin >> q >> a >> b ;
    auto it = find(v.begin(), v.end(), v[q-1]);
    v.erase(it);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<"\n";
    for(auto i : v)cout<<i<<" ";
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
