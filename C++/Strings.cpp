#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
void solve(){
    string a , b ;
    cin >> a >> b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    swap(a[0],b[0]);
    cout<<a<<" "<<b;

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
