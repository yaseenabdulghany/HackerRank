#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
struct len : exception {
    string s;
    len(int n) : s(to_string(n)) {}
    const char *what() const noexcept override {
        return s.c_str();
    }
};
bool check(string s) {
    bool isValid = true;
    int n = s.length();
    if(n < 5) {
        throw len(n);
    }
    for(int i = 0; i < n-1; i++) {
        if(s[i] == 'w' && s[i + 1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}
void solve() {
    string s;
    cin >> s;
    try {
        bool isValid = check(s);
        if(isValid) {
            cout << "Valid" << '\n';
        } else {
            cout << "Invalid" << '\n';
        }
    } catch (len e) {
        cout << "Too short: " << e.what() << '\n';
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
