#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
#define INF 10000000
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_val = -INF, min_val = INF;
    for (int i = 0; i < n; i++) {
        max_val = MAX(max_val, arr[i]);
        min_val = MIN(min_val, arr[i]);
    }
    cout << "Result = " << max_val - min_val << "\n";
}
int32_t main(){
    FAST_DOT_COM
//    freopen("file.txt", "r", stdin);
//    freopen("file.txt", "w", stdout);
    int t=1 ;
//    cin>>t ;
    while (t--  ) solve();
    return 0;
}
