#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=998244353, INF=0X3F3F3F3F , MAX= 1e6;
vector<int> convert(string str) {
    vector <int> v;
    stringstream st(str);
    string temp;
    int  a;
    while(getline(st, temp, ',')){
        a= stoi(temp);
        v.push_back(a);
    }
    return v;
}
void solve(){
    string str;
    cin >> str;
    vector<int> nums = convert(str);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "\n";
    }

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
