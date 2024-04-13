#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
void solve() {
    int n;
    int isFib = 0;
    long long unsigned int num,fib1 = 0, fib2 = 1, nextfib = 0;
    cin >> n;
    while (n != 0) {
        cin >> num;
        while (nextfib < num) {
            nextfib = fib1 + fib2;
            if (nextfib == num) {
                isFib = 1;
            }
            fib1 = fib2;
            fib2 = nextfib;
        }
        if (isFib) {
            cout << "IsFibo\n";
        }
        else {
            cout << "IsNotFibo\n";
        }
        fib1 = 0;
        fib2 = 1;
        isFib = 0;
        nextfib = 0;
        n--;
    }
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t=1 ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
