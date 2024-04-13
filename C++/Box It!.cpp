#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
class Box{
private:
    int l,b,h;
public:
    Box(){
        l = b = h = 0;
    }
    Box(int length,int breadth,int height){
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength(){
        return(l);
    }
    int getBreadth()
    {
        return(b);
    }
    int getHeight()
    {
        return(h);
    }

    long long CalculateVolume()
    {
        return ((long long)l*b*h);
    }

    friend bool operator < (Box& b1, Box& b2)
    {
        if((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) ||
           (b1.l == b2.l && b1.b == b2.b && b1.h <b2.h))
            return(true);
        else
            return(false);
    }

    friend ostream& operator << (ostream& s,Box& b1)
    {
        s << b1.l << " " << b1.b << " " << b1.h;
        return s;
    }
};
void solve(){
    int n;
    cin>>n;
    Box bb;
    for(int i=0;i<n;i++){
        int type;
        cin>>type;
        if(type ==1){
            cout << bb << "\n";
        }
        if(type == 2){
            int l,b,h;
            cin>>l>>b>>h;
            Box b1(l, b, h);
            bb=b1;
            cout << bb << "\n";
        }
        if(type==3){
            int l,b,h;
            cin>>l>>b>>h;
            Box b1(l, b, h);
            if(b1 < bb){
                cout<<"Lesser\n";
            }
            else{
                cout<<"Greater\n";
            }
        }
        if(type==4){
            cout << bb.CalculateVolume() << "\n";
        }
        if(type==5){
            Box NewBox(bb);
            cout<<NewBox<<"\n";
        }
    }
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
