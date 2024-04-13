#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
void solve(){
    int a , b ;
    cin >> a >> b ;
    char ch;
    cin >> ch;
    float f ;
    cin >> f;
    double d;
    cin>>d;
    cout<<a<<"\n"<<b<<"\n"<<ch<<"\n";
    cout<<fixed<<setprecision(3)<<f<<"\n";
    cout<<fixed<<setprecision(9)<<d<<"\n";
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
