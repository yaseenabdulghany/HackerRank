#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=998244353, INF=0X3F3F3F3F , MAX= 1e6;
void solve(){
    int n, q;
    cin >> n >> q;
    cin.ignore();
    vector<string> hrml,quer;
    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp);
        hrml.push_back(temp);
    }
    for (int i = 0; i < q; i++) {
        string temp;
        getline(cin, temp);
        quer.push_back(temp);
    }
    map<string, string> m;
    vector<string> tag;
    for (int i = 0; i < n; i++) {
        string temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        if (temp.substr(0, 2) == "</") {
            tag.pop_back();
        }
        else {
            stringstream st;
            st.str("");
            st << temp;
            string t1, p1, v1;
            char ch;
            st >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0) {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            } 
            else temp1 = t1;
            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;
            while (st) {
                st >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        if (m.find(quer[i]) == m.end()) {
            cout << "Not Found!\n";
        } 
        else {
            cout << m[quer[i]] << "\n";
        }
    }
}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
