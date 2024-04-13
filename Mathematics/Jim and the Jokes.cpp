#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
bool isValid(int month, int date) {
    return month != 1 && to_string(date).find_first_not_of(to_string(month)) == string::npos;
}
int convertToNumber(int month, int date) {
    int number = 0;
    string dateStr = to_string(date);
    for (char digit : dateStr) {
        number = number * month + (digit - '0');
    }
    return number;
}
int cnt[38];
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int m, d;
        cin >> m >> d;
        int tmp = d;
        bool valid = true;
        while (tmp){
            if (tmp % 10 >= m) valid = false;
            tmp /= 10;
        }
        if (!valid) continue;
        int val = 0;
        tmp = d;
        int tt = 1;
        while (tmp){
            val += (tmp % 10) * tt;
            tt *= m;
            tmp /= 10;
        }
        cnt[val]++;
    }
    int res = 0;
    for (int i = 0; i < 38; i++) res += cnt[i] * (cnt[i] - 1) / 2;
    cout << res << "\n";
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
