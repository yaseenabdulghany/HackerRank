#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
class Rectangle{
protected:
    int width,height;
public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        cout << width << " " << height << "\n";
    }
};
class RectangleArea: public Rectangle{
public: void display(){
        cout << width * height;
    }
};
void solve() {
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
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
