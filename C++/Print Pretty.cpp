#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=998244353, INF=0X3F3F3F3F , MAX= 1e6;
void solve(){
    double a,b,c ; 
    cin >> a >> b >> c ;
    cout << hex << left << showbase << nouppercase;
    cout << (int)a << "\n"; 
    cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
    cout << b << endl; 
    cout << scientific << uppercase << noshowpos << setprecision(9); 
    cout << c << endl;

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
    cin>>t ;
    while (t--) solve();
    return 0;
}
