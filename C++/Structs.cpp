#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
struct data{
    int age;
    string first;
    string last;
    int standard;
}d;
void solve(){
    int a , stan;
    string f , l;
    cin >> a >> f >> l >> stan;
    d.age=a;
    d.first=f;
    d.last=l;
    d.standard=stan;
    cout<<d.age<<" "<<d.first<<" "<<d.last<<" "<<d.standard;
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
