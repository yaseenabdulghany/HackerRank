#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e18 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1000000007;
class Person {
public:
    string name;
    int age;
    virtual void getdata() {
        cin >> this->name >> this->age;
    }
    virtual void putdata() {
        cout << this->name << " " << this->age << endl;
    }
};
class Professor : public Person {
public:
    Professor() {
        this->cur_id = ++id;
    }
    int publications;
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata() {
        cout << this->name << " "<< this->age << " "<< this->publications << " "<< this->cur_id << "\n";
    }
};
int Professor::id = 0;
class Student : public Person {
#define sz 6
public:
    Student() {
        this->cur_id = ++id;
    }
    int marks[sz];
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age;
        for (int i=0; i < sz; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        int marksSum = 0;
        for (int i=0; i < sz; i++) {
            marksSum += marks[i];
        }
        cout << this->name << " "<< this->age << " "<< marksSum << " "<< this->cur_id << endl;
    }
};
int Student::id = 0;
void solve() {
    int n, x;
    cin>>n;
    Person *per[n];
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x == 1){
            per[i] = new Professor;
        }
        else per[i] = new Student;
        per[i]->getdata();
    }
    for(int i=0;i<n;i++)
        per[i]->putdata();
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
