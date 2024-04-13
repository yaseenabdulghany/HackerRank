#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int cnt=0;
void calc(char a ,char b , char c,int n){
    if(n>1)calc(a,c,b,n-1);
    cout<<"disk number "<<n<<" move from "<<a<<" to "<<c<<"\n";
    cnt++;
    if(n>1)calc(b,a,c,n-1);
}
void solve() {
    int n ;
    cin>>n;
    calc('a','b','c',n);
    cout<<"total number of moves = "<<cnt;   // bonus
}
int32_t main() {
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t = 1;
//    cin >> t;
    while (t--) solve();
    return 0;
}
