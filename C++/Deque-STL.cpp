#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
void go(int v[], int n, int k){
    deque<int> q;
    for(int i = 0; i < n; i++){
        for(; !q.empty() && v[i] > q.back();)
            q.pop_back();
        q.push_back(v[i]);
        if(i >= k && q.front() == v[i - k])
            q.pop_front();
        if(i >= k-1)
            printf(i < n-1 ? "%d ":"%d\n", q.front());
    }
}
void solve() {
    int n, k;
    cin >> n >> k;
    int i;
    int v[n];
    for (i = 0; i < n; i++)
        cin >> v[i];
    go(v, n, k);
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
