#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int calc(int n) {
    queue<int> q;
    q.push(9);
    while (!q.empty()) {
        int num = q.front();
        q.pop();
        if (num % n == 0) return num;
        q.push(num * 10);
        q.push(num * 10 + 9);
    }
    return -1;
}
void solve() {
    int n;
    cin >> n;
    cout << calc(n) << "\n";
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t=1 ;
    cin>>t ;
    while (t--) solve();
    return 0;
}
