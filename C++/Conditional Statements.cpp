#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 2e5 + 7;
void solve(){
    int n ;
    cin >> n ;
//    if(n>=1&&n<=9){
        switch (n) {
            case 1 :
                cout<<"one\n";
                break;
            case 2:
                cout<<"two\n";
                break;
            case 3:
                cout<<"three\n";
                break;
            case 4:
                cout<<"four\n";
                break;
            case 5:
                cout<<"five\n";
                break;
            case 6:
                cout<<"six\n";
                break;
            case 7:
                cout<<"seven\n";
                break;
            case 8:
                cout<<"eight\n";
                break;
            case 9:
                cout<<"nine\n";
                break;
            default :
                cout<<"Greater than 9";
                break;

    }
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
