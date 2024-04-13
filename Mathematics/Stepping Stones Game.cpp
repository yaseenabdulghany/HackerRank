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
    int c = n * 2,r = round((-1 + sqrt(1 + 4 * c)) / 2);
    if (r * (r + 1) / 2 == n) {
        cout << "Go On Bob " << r << "\n";
    }
    else {
        cout << "Better Luck Next Time\n";
    }
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
