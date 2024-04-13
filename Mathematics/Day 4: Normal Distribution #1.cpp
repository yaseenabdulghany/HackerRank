#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1000000007, INF=0X3F3F3F3F , MAX= 1005;
double normalCDF(double x, double mean, double std_dev) {
    return 0.5 * (1 + erf((x - mean) / (std_dev * sqrt(2))));
}
void solve() {
    double mean = 30;
    double std_dev = 4;
    double cdf40 = normalCDF(40.0, mean, std_dev);
    double cdf0 = normalCDF(0.0, mean, std_dev);
    double cdf21 = normalCDF(21.0, mean, std_dev);
    double cdf30 = normalCDF(30.0, mean, std_dev);
    double cdf35 = normalCDF(35.0, mean, std_dev);
    double probLess40 = cdf40 - cdf0,probBigger21 = 1 - cdf21,probBetween30_35 = cdf35 - cdf30;
    cout << fixed <<setprecision(3)<< probLess40 << "\n";
    cout << fixed <<setprecision(3)<< probBigger21 << "\n";
    cout << fixed <<setprecision(3)<< probBetween30_35 << "\n";
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
