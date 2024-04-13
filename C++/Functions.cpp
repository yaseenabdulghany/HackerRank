#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
int mx(int a , int b , int c , int d){
    int m=a ;
    if(b>m)m=b;
    if(c>m)m=c;
    if(d>m)m=d;
    return m;
}
void solve(){
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    cout<<mx(a,b,c,d);

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
