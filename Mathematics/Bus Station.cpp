#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
int a[100000];
set<int> s;
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int tot = a[0];
    s.insert(tot);
    for (int i = 1; i < n; i++){
        tot += a[i];
        s.insert(tot);
    }
    for (set<int>::iterator it = s.begin(); it != s.end();++it){
        if (tot % (*it) == 0){
            bool flag = true;
            for (int j = 1; j <= tot / (*it); j++){
                set<int>::iterator tt = s.find((*it) * j);
                if (tt == s.end()){
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << *it << " ";
        }
    }
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
