#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e5 + 5 ,MOD=998244353, INF=0X3F3F3F3F , MAX= 1e6;
class Student {
private:
    vector<int> scores;

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;
            scores.push_back(score);
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};
void solve(){
    int n; 
    cin >> n;
    Student *s = new Student[n]; 
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    int sum = s[0].calculateTotalScore() , cnt = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > sum){
            cnt++;
        }
    }
    cout << cnt;

}
int32_t main(){
    FAST_DOT_COM
    int t=1  ;
//    cin>>t ;
    while (t--) solve();
    return 0;
}
