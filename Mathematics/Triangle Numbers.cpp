#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
void solve() {
    int row = 0;
    cin >> row;
    if(row == 1 || row == 2){
        cout<<"=1\n";
        return;
    }
    if((row & 1 ) == 1){
        cout<<"2";
    }
    else{
        if (((row / 2) & 1 ) == 1 ){
            cout<<"4";
        }
        else{
            cout<<"3";
        }
    }
    cout<<"\n";
}
int32_t main() {
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
