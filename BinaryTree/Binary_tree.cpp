#include <bits/stdc++.h>
using namespace std;
#define FAST_DOT_COM  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 1e5+9 ,MOD=1e9+7, INF=0X3F3F3F3F , MAX= 1e18+9;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isValidCoordinate(int x, int y, int width, int height) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

bool isCoordinateFree(int x, int y, const vector<pair<int, int>>& bombs, const unordered_set<string>& occupied) {
    for (const auto& bomb : bombs) {
        if (bomb.first == x && bomb.second == y) {
            return false;
        }
    }
    return occupied.find(to_string(x) + "," + to_string(y)) == occupied.end();
}

bool isGoalReached(TreeNode* root, int goalX, int goalY) {
    if (!root) return false;
    if (goalX == (root->val - 1) && goalY == 0) return true;
    if (goalX < root->val - 1) return isGoalReached(root->left, goalX, goalY - 1);
    return isGoalReached(root->right, goalX, goalY - 1);
}

void insert(TreeNode*& root, int val, int x, int y) {
    if (!root) {
        root = new TreeNode(val);
        return;
    }
    if (val < root->val) {
        insert(root->left, val, x - 1, y + 1);
    } else {
        insert(root->right, val, x + 1, y + 1);
    }
}

void display(TreeNode* root) {
    if (!root) return;
    display(root->left);
    cout << root->val << endl;
    display(root->right);
}
void solve() {
    int width, height, n, bom, goall;
    cin >> width >> height >> n >> bom >> goall;
    vector<pair<int, int>> v(bom);
    unordered_set<string> st;
    for (int i = 0; i < bom; ++i) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
        st.insert(to_string(x) + "," + to_string(y));
    }
    vector<pair<int, int>> goals(goall);
    for (int i = 0; i < goall; ++i) {
        cin >> goals[i].first >> goals[i].second;
    }
    TreeNode* root = nullptr;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val < 1 || val > n) {
            cout << "Invalid input: " << val << "\n";
            return;
        }
        if (st.find(to_string((width - 1) / 2) + "," + "0") != st.end()) {
            cout << "The root position is st by a bomb!\n";
            return;
        }
        insert(root, val, (width - 1) / 2, 0);
        if (!isValidCoordinate((width - 1) / 2, 0, width, height) ||
            !isCoordinateFree((width - 1) / 2, 0, v, st)) {
            cout << "You lose!" << endl;
            return;
        }
        bool flag = false;
        for (const auto& goal : goals) {
            if (isGoalReached(root, goal.first, goal.second)) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "A goal is not reached!\n";
            return;
        }
        display(root);
    }
    cout << "You win!\n";
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
