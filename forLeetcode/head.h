#pragma once
#include<iostream>
////#include<map>
//#include<set>
////#include<unordered_map>
////#include<stack>
//#include<deque>
#include<vector>
////#include<queue>
////#include<algorithm>
#include <fmt/format.h>
using namespace std;



//int guess(int n);

//class Solution {
//public:
//    vector<vector<bool>> matix;
//    void dfs(vector<int>& grid, int i, int j) {
//        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())return;
//        if (grid[i][j] == '1' && matix[i][j] == false) {
//            matix[i][j] = true;
//            dfs(grid, i - 1, j);
//            dfs(grid, i + 1, j);
//            dfs(grid, i, j - 1);
//            dfs(grid, i, j + 1);
//        }
//        else if (grid[i][j] == '0') {
//            return;
//        }
//    }
//
//    int numIslands(vector<vector<char>>& grid) {
//        matix.resize(grid.size(), vector<bool>(grid[0].size(), false));
//
//        int ans = 0;
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                if (matix[i][j] == false && grid[i][j] == '1') {
//                    dfs(grid, i, j);
//                    ans++;
//                }
//            }
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//        int n = nums.size();
//        int mul = 1, number = 0;
//        for (int l = 0; l < n; l++) {
//            mul = 1;
//            for (int r = l; r < n; r++) {
//                if (mul * nums[r] >= k) {
//                    mul = 1;
//                    break;
//                }
//                else {
//                    mul *= nums[r];
//                    number++;
//                }
//            }
//        }
//        return number;
//    }
//};

//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        int n = s.size(), m = p.size();
//        vector<int> Hashmap(26);
//        for (int i = 0; i < m; i++) ++Hashmap[p[i] - 'a'];
//
//        vector<int> ans;
//        for (size_t l = 0, r = 0; r < n; r++) {
//            --Hashmap[s[r] - 'a'];
//            while (Hashmap[s[r] - 'a'] < 0) {
//                Hashmap[s[l] - 'a']++;
//                l++;
//            }
//            if (r - l + 1 == m)ans.push_back(l);
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    vector<string> cellsInRange(string s) {
//        vector<string> ans;
//        int n = s[3] - s[0];
//        int m = s[4] - s[1];
//        for (int i = 0; i <= n; i++) {
//            for (int j = 0; j <= m; j++) {
//                string str;
//                str += s[0] + i;
//                str += s[1] + j;
//                ans.push_back(str);
//            }
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    bool backspaceCompare(string s, string t) {
//        int i = s.size() - 1, j = t.size() - 1;
//        int skipi = 0, skipj = 0;
//        while (i >= 0 || j >= 0) {
//            while (i >= 0) {
//                if (s[i] == '#') {
//                    skipi++; i--;
//                }
//                else if (skipi > 0) {
//                    skipi--; i--;
//                }
//                else {
//                    break;
//                }
//            }
//            while (j >= 0) {
//                if (t[j] == '#') {
//                    skipj++; j--;
//                }
//                else if (skipj > 0) {
//                    skipj--; j--;
//                }
//                else {
//                    break;
//                }
//            }
//            if (i >= 0 && j >= 0) {
//                if (s[i] != t[j])return false;
//            }
//            else {
//                if (i >= 0 || j >= 0)return false;
//            }
//            i--; j--;
//        }
//        return true;
//    }
//};

//class Solution {
//public:
//    bool backspaceCompare(string s, string t) {
//        set<char> st;
//        for (auto a : s) {
//            if (a == '#')continue;
//            st.insert(a);
//        }
//        for (auto a : t) {
//            if (a == '#')continue;
//            st.erase(a);
//        }
//        if (st.empty())return true;
//        return false;
//    }
//};

//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
// 
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (!head)return head;
//        ListNode* headNode = new ListNode(0, head);
//
//        ListNode* ptr = headNode;
//        while (ptr && ptr->next && ptr->next->next) {
//            if (ptr->next->val == ptr->next->next->val) {
//                auto a = ptr->next;
//                ptr->next = ptr->next->next;
//                delete a;
//            }
//            ptr = ptr->next;
//        }
//        return headNode->next;
//    }
//};

//class Solution {
//public:
//    int dfs(int l, int r, vector<int>& nums) {
//        if (nums[l] <= nums[r]) {
//            return nums[l];
//        }
//        else {
//            int mid = (l + r) >> 1;
//            return min(dfs(l, mid, nums), dfs(mid + 1, r, nums));
//        }
//    }
//    int findMin(vector<int>& nums) {
//        return dfs(0, nums.size() - 1, nums);
//    }
//};

//class Solution {
//public:
//    vector<int> runningSum(vector<int>& nums) {
//        if (nums.empty())return {};
//
//        vector<int> s; s.resize(nums.size());
//        s[0] = nums[0];
//        for (int i = 1; i < s.size() ; i++) {
//            s[i] = s[i - 1] + nums[i];
//        }
//        return s;
//    }
//};

//class Solution {
//public:
//    int dfs(int l, int r, int target, vector<int>& nums) {
//        if (l < 0 || r < 0)return -1;
//        if (nums[l] > nums[r]) {
//            int mid = (l + r+1) >> 1;
//            int a = dfs(l, mid - 1, target, nums);
//            int b = dfs(mid, r, target, nums);
//            return a != -1 ? a : b;
//        }
//        else {
//            while (l < r) {
//                int mid = (l + r) >> 1;
//                if (nums[mid] >= target)r = mid;
//                else l = mid + 1;
//            }
//            if (nums[l] == target)return l;
//            return -1;
//        }
//    }
//    int search(vector<int>& nums, int target) {
//        int l = 0, r = nums.size() - 1;
//        return dfs(l, r, target, nums);
//    }
//};


/*class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        for (int i = nums1.size() - 1, j = nums2.size() - 1; i >= 0 && j >= 0;) {
            while (i >= 0 && nums1[i] <= nums2[j] ) {
                res = max(res, j - i);
                i--;
            }
            j--;
        }
        return res;
    }
};*/

//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> ans;
//        map<int, int> m;
//        for (auto i : nums1) {
//            m[i]++;
//        }
//        for (auto i : nums2) {
//            if (m.find(i) != m.end()) {
//                ans.push_back(i);
//                m[i]--;
//                if (m[i] == 0)m.erase(i);
//            }
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    bool checkIfExist(vector<int>& arr) {
//        set<double> s;
//        for (double i : arr) {
//            i = double(i);
//            if (s.count(i * 2) == 1 || s.count(i / 2))return true;
//            s.insert(i);
//        }
//        return false;
//    }
//};

//class Solution {
//public:
//    vector<pair<int, int>> tmp;
//    void find(int i, vector<vector<int>>& mat) {
//        int l = 0, r = mat[0].size();
//        while (l < r) {
//            int mid = (l + r ) >> 1;
//            if (mat[i][mid] <= 0)r = mid;
//            else l = mid + 1;
//        }
//
//        tmp.push_back({ l,i });
//    }
//    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//        for (int i = 0; i < mat.size(); i++) {
//            find(i, mat);
//        }
//        sort(tmp.begin(), tmp.end());
//        vector<int> ans;
//        for (int i = 0; i < k; i++) {
//            ans.push_back(tmp[i].second);
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    int specialArray(vector<int>& nums) {
//        for (int i = 0; i <= nums.size(); i++) {
//            int l = 0, r = nums.size() - 1;
//            while (l < r) {
//                int mid = l + (r - l) / 2;
//                if (nums[mid] >= i)r = mid;
//                else l = mid - 1;
//            }
//            if (nums.size() - i == i)return i;
//        }
//        return -1;
//    }
//};


//class Solution {
//public:
//    int arrangeCoins(int n) {
//        int number = 1;
//        while (n > 0) {
//            n -= number;
//            if (n < 0)break;
//            number++;
//        }
//        if (n < 0)number--;
//        return number;
//    }
//};

//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int l = 0, r = nums.size() - 1;
//        vector<int> v;
//        while (l < r) {
//            
//            int mid = l + (r - l) / 2;
//            if (nums[mid] >= target)r = mid;
//            else l = mid + 1;
//        }
//        if (nums[l] != target) {
//            v.push_back(-1);
//            v.push_back(-1);
//        }
//        else {
//            v.push_back(l);
//            l = 0, r = nums.size() - 1;
//            while (l < r) {
//                int mid = l + (r - l + 1) / 2;
//                if (nums[mid] <= target)l = mid;
//                else r = mid - 1;
//            }
//            v.push_back(l);
//        }
//        return v;
//    }
//};


//class Solution {
//public:
//    char nextGreatestLetter(vector<char>& letters, char target) {
//        int l = 0, r = letters.size() - 1;
//        while (l < r) {
//            int mid = l + (r - l + 1) / 2;
//            if (letters[mid] <= target)l = mid;
//            else r = mid - 1;
//        }
//        if (letters[l] < target) return letters[0];
//        return letters[l + 1];
//    }
//};


//class Solution {
//public:
//    int mySqrt(int x) {
//        double l = -10000, r = 10000;
//        while (l <= r) {
//            double mid = l + (r - l) / 2;
//            if (mid * mid < x)l = mid;
//            else r = mid;
//        }
//        return (int)l;
//    }
//};


//class Solution {
//public:
//    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//        int ans = 0;
//        for (int i = 0; i < arr1.size(); i++) {
//            int j = 0;
//            while (j < arr2.size()) {
//                if (abs(arr1[i] - arr2[j]) > d)j++;
//                else break;
//            }
//            if (j == arr2.size() )ans++;
//        }
//        return ans;
//    }
//};

//class Solution{
//public:
//    int guessNumber(int n) {
//        int l = 1,r = n;
//        while (l < r) {
//            int mid = (l + r) >> 1;
//            if (guess(mid) < 0)r = mid - 1;
//            else if (guess(mid) > 0)l = mid + 1;
//            else {
//                l = mid;
//                break;
//            }
//        }
//        return l;
//    }
//};

//class Solution {
//public:
//    int guessNumber(int n) {
//        int l = 1, r = n;
//        int mid = 0;
//        while (l < r) {
//            mid = l + (r - l) / 2;
//            if (guess(mid) == 1)r = mid - 1;
//            else if (guess(mid) == -1)l = mid + 1;
//            else if (guess(mid) == 0)break;
//        }
//        return mid;
//    }
//};

//class Solution {
//public:
//    TreeNode* dfs(TreeNode* root, int val) {
//        if (!root)return nullptr;
//        if (root->val == val)return root;
//        TreeNode* p = nullptr;/*
//        if (!dfs(root->left, val))p = dfs(root->left, val);
//        if (!dfs(root->right, val)&&!p)p = dfs(root->right, val);*/
//        p = dfs(root->left, val) != nullptr ? dfs(root->left, val) : dfs(root->left, val);
//        return p;
//    }
//    void dfs2(TreeNode*& ans, TreeNode* p) {
//        if (!p)return;
//        else {
//            ans = p;
//            dfs2(ans->left, p->left);
//            dfs2(ans->right, p->right);
//        }
//    }
//    TreeNode* searchBST(TreeNode* root, int val) {
//        TreeNode* p = dfs(root, val);
//        TreeNode* ans;
//        dfs2(ans, p);
//        return ans;
//    }
//};
//class Solution {
//public:
//    int minimumTotal(vector<vector<int>>& triangle) {
//        int n = triangle.size();
//        int m = triangle[n - 1].size();
//        vector<int> v(m);
//        for (int i = 0; i < m; i++) {
//            v[i] = triangle[n - 1][i];
//        }
//        for (int i = n - 2; i >= 0; i--) {
//            for (int j = 0; j < triangle[i].size(); j++) {
//                v[j] = min(v[j], v[j + 1]) + triangle[i][j];
//            }
//        }
//        return v[0];
//    }
//};


//class Solution {
//public:
//    int minimumTotal(vector<vector<int>>& triangle) {
//        int n = triangle.size();
//        int m = triangle[n - 1].size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = 0; j < triangle[i].size(); j++) {
//                if (i == n - 1) {
//                    dp[i][j] = triangle[i][j];
//                }
//                else {
//                    dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
//                }
//            }
//        }
//        return dp[0][0];
//    }
//};


//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
// 
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> ans;
//        queue<TreeNode*> d;
//        d.push(root);
//        while (!d.empty()) {
//            int length = d.size();
//            vector<int> tmp;
//            for (int i = 0; i < length; i++) {
//                auto p = d.front();
//                d.pop();
//                if (p->left)d.push(p->left);
//                if (p->right)d.push(p->right);
//                tmp.push_back(p->val);
//            }
//            ans.push_back(tmp);
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    bool isAlienSorted(vector<string>& words, string order) {
//        unordered_map<char, int> m;
//        int number = 1;
//        for (auto i : order) {
//            m[i] = number++;
//        }
//        for (int i = 0; i < words.size() - 1; i++) {
//            for (int j = 0; j < words[0].size(); j++) {
//                cout << m[words[i][j]] << " " << m[words[i + 1][j]];
//                if (m[words[i][j]] < m[words[i + 1][j]])
//                    return false;
//            }
//        }
//        return true;
//    }
//};

//class Solution {
//public:
//    vector<vector<int>> ans;
//    vector<int> tmp;
//    void beforedfs(vector<int>& nums) {
//        vector<bool> seen(nums.size()+1);
//        for (int i = 0; i < seen.size(); i++)seen[i] = false;
//        dfs(1, nums.size(), seen);
//    }
//    void dfs(int u, int n, vector<bool>& seen) {
//        if (u == n + 1 && tmp.size() != n)
//            return;
//        if (u == n + 1 && tmp.size()==n) {
//            ans.push_back(tmp);
//            return;
//        }
//        for (int i = 1; i <= n; i++) {
//            if (!seen[i]) {
//                tmp.push_back(i);
//                seen[i] = true;
//                dfs(u + 1, n, seen);
//
//                tmp.pop_back();
//                seen[i] = false;
//                dfs(u + 1, n, seen);
//            }
//        }
//    }
//    vector<vector<int>> permute(vector<int>& nums) {
//        beforedfs(nums);
//        return ans;
//    }
//};



//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> s1;
//        for (auto i : s) {
//            if (i == '{' || i == '(' || i == '[')
//                s1.push(i);
//            else if(i=='}'||i==')'||i'']){
//            }
//            else  {
//                auto j = s1.top();
//                s1.pop();
//                if (j == '(' && i == ')' || j == '{' && i == '}' || j == '[' && i == ']') {
//                    continue;
//                }
//                else {
//                    return false;
//                }
//            }
//            
//        }
//        if (s1.empty())return true;
//        return false;
//    }
//};

//class Solution {
//public:
//    int orangesRotting(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<bool>> seen(m,vector<bool>(n));
//        queue<pair<int, int>> q;
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (grid[i][j] == 2) {
//                    q.push({ i,j });
//                    seen[i][j] = true;
//                }
//            }
//        }
//        vector<vector<int>> dise = { {0,-1},{1,0},{0,1},{-1,0} };
//        auto size = q.size();
//        int number = 0;
//        while (!q.empty()) {
//            bool flag = false;
//            for (int i = 0; i < size; i++) {
//                auto a = q.front().first; auto b = q.front().second;
//                q.pop();
//
//                for (int k = 0; k < 4; k++) {
//                    auto i = a + dise[k][0]; auto j = b + dise[k][1];
//                    if (i >= 0 && j >= 0 && i < m && j < n && !seen[i][j]) {
//                        if (grid[i][j] == 1) {
//                            grid[i][j] = 2;
//                            q.push({ i,j });
//                            seen[i][j] = true;
//                            flag = true;
//                        }
//                    }
//                }
//            }
//            if (flag)number++;
//            size = q.size();
//        }
//        return number;
//    }
//};

//class Solution {
//private:
//
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//        auto m = mat.size();
//        auto n = mat[0].size();
//        vector<vector<int>> ans(m, vector<int>(n));
//        queue<pair<int, int>> q;
//
//        //初始化
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                //如果原来的矩阵为0，ans里面就为0，然后队列里面进行压入为0的点
//                if (mat[i][j] == 0) {
//                    ans[i][j] = 0;
//                    q.push({ i,j });
//                }
//                else {
//                    //这里是让1的点在ans的映射变为无穷大
//                    ans[i][j] = 1000;
//                }
//            }
//        }
//        //上下左右各个点
//        int dise[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
//
//        //广度优先搜索
//        while (!q.empty()) {
//            //拿到队列的各个点
//            auto a = q.front().first; auto b = q.front().second;
//            q.pop();
//            //遍历队列中点的上下左右四个点
//            for (int k = 0; k < 4; k++) {
//
//                int i = a + dise[k][0];
//                int j = b + dise[k][1];
//                //取各个点的最小值
//                if (i >= 0 && i < m && j >= 0 && j < n) {
//                    if (ans[a][b] + 1 < ans[i][j]) {
//                        ans[i][j] = ans[a][b] + 1;
//                        q.push({ i,j });
//                    }
//                }
//            }
//        }
//        return ans;
//    }
//};

// Definition for a Node.
//class Node {
//public:
//    int val;
//    Node* left;
//    Node* right;
//    Node* next;
//
//    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//    Node(int _val, Node* _left, Node* _right, Node* _next)
//        : val(_val), left(_left), right(_right), next(_next) {}
//    void addNode(int number) {
//        if (!this->left) {
//            this->left = new Node(number);
//            return;
//        }
//        else if (!this->right) {
//            this->right = new Node(number);
//            return;
//        }
//        else {
//            this->left->addNode(number);
//            this->right->addNode(number);
//        }
//    }
//};
//
//void func(Node*);
//void func1(Node* root);

//class Solution {
//public:
//    Node* connect(Node* root) {
//        if (!root)return NULL;
//        queue<Node*> que;
//        que.push(root);
//        while (!que.empty()) {
//            int size = que.size();
//            for (int i = 0; i < size; i++)
//            {
//                auto nownode = que.front();
//                que.pop();
//
//                if (i != size - 1) {
//                    auto nextnode = que.front();
//                    nownode->next = nextnode;
//                }
//                else {
//                    nownode->next = NULL;
//                }
//                if (nownode->left)que.push(nownode->left);
//                if (nownode->right)que.push(nownode->right);
//            }
//        }
//        return root;
//    }
//};

//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    void addNode(int x) {
//        ListNode* p = this;
//        while (p->next != nullptr) {
//            p = p->next;
//        }
//        p->next = new ListNode(x);
//    }
//};
//
//void PrintList(ListNode* l3);
//
//class Solution {
//public:
//    void addnode(ListNode*& newptr, int number) {
//        if (!newptr) {
//            newptr = new ListNode(number);
//            return;
//        }
//        ListNode* p = newptr;
//        while (p->next) {
//            p = p->next;
//        }
//        p->next = new ListNode(number);
//    }
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int tmp = 0;
//        ListNode* newptr = nullptr;
//        while (l1 && l2) {
//
//            addnode(newptr, (l1->val + l2->val + tmp) % 10);
//            tmp = (l1->val + l2->val+tmp) / 10;
//
//            l1 = l1->next;
//            l2 = l2->next;
//        }
//        while (l1) {
//            addnode(newptr, (l1->val + tmp) % 10);
//            tmp = (l1->val + tmp) / 10;
//            l1 = l1->next;
//        }
//        while (l2) {
//            addnode(newptr, (l2->val + tmp) % 10);
//            tmp = (l2->val + tmp) / 10;
//            l2 = l2->next;
//        }
//        if (tmp != 0)
//            addnode(newptr, tmp);
//        return newptr;
//    }
//};

//class Solution {
//public:
//    bool oneEditAway(string first, string second) {
//        int p1 = 0;
//        int q1 = first.size() - 1;
//        int p2 = 0;
//        int q2 = second.size() - 1;
//        while (p1 <= q1 && p2 <= q2) {
//            if (first[p1] == second[p1]) {
//                ++p1;
//                ++p2;
//                continue;
//            }
//            if (first[q1] == second[q2]) {
//                --q1;
//                --q2;
//            }
//            else {
//                break;
//            }
//        }
//        return q1 - p1 + q2 - p2 <= 0 && abs(p1 - p2) <= 1 && abs(q1 - q2) <= 1;
//    }
//};

//class Solution {
//public:
//    int dfs(int r, int c, vector<vector<int>>& grid) {
//        if (r<0 || c<0 || r>grid.size() - 1 || c>grid[0].size() - 1) {
//            return 0;
//        }
//        if (grid[r][c] == 0)
//            return 0;
//        if (grid[r][c] == 1) {
//            grid[r][c] = 0;
//            return dfs(r - 1, c, grid) + dfs(r, c - 1, grid) + dfs(r + 1, c, grid) + dfs(r, c + 1, grid) + 1;
//        }
//        return 0;
//    }
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        int maxnum = 0;
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                maxnum = max(dfs(i, j, grid), maxnum);
//            }
//        }
//        return maxnum;
//    }
//};

//class Solution {
//public:
//    void dfs(int r, int c, vector<vector<int>>& image, int color, int newColor) {
//        if (r<0 || r>image.size() - 1 || c<0 || c>image[0].size() - 1) {
//            return;
//        }
//        if (image[r][c] == color)
//        {
//            image[r][c] = newColor;
//            dfs(r - 1, c, image, color, newColor);
//            dfs(r, c - 1, image, color, newColor);
//            dfs(r + 1, c, image, color, newColor);
//            dfs(r, c + 1, image, color, newColor);
//        }
//    }
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//        auto chang = image.size();
//        auto kuan = image[0].size();
//        auto color = image[sr][sc];
//        if (color == newColor)
//            return image;
//        dfs(sr, sc, image, color, newColor);
//        return image;
//    }
//};


//
//void PrintList(ListNode* l3);
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int number = 0;
//        ListNode* p = head;
//        while (p) {
//            p = p->next;
//            number++;
//        }
//        if (number == n)
//        {
//            ListNode* tmp = head;
//            head = head->next;
//            delete tmp;
//            return head;
//        }
//        number = number - n + 1;
//        p = head;
//        for (int i = 0; i < number - 1; i++) {
//            p = p->next;
//        }
//        ListNode* tmp = p->next;
//        p->next = p->next->next;
//        delete tmp;
//        return head;
//    }
//};

//class Solution {
//public:
//    ListNode* middleNode(ListNode* head) {
//        ListNode* p = head;
//        while (head != nullptr && head->next != nullptr && head->next->next != nullptr) {
//            p = p->next;
//            head = head->next->next;
//        }
//        return p;
//    }
//};

//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        set<int> schang;
//        set<int> skuan;
//        for (int i = 0; i < matrix.size(); i++) {
//            for (int j = 0; j < matrix[0].size(); j++) {
//                if (matrix[i][j] == 0) {
//                    schang.insert(i);
//                    skuan.insert(j);
//                }
//            }
//        }
//        for (int i = 0; i < matrix.size(); i++) {
//            for (int j = 0; j < matrix[0].size(); j++) {
//                if (schang.find(i) != schang.end() || skuan.find(j) != skuan.end()) {
//                    matrix[i][j] = 0;
//                }
//            }
//        }
//    }
//};

//class Solution {
//public:
//    
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> ans;
//        ans.push_back({ 1 });
//        for (int i = 1; i < numRows; i++) {
//            vector<int> tmp;
//            for (int j = 0; j <= i; j++) {
//                if (j == 0||j==i) {
//                    tmp.push_back(1);
//                }
//                else {
//                    tmp.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
//                }
//            }
//            ans.push_back(tmp);
//        }
//        return ans;
//    }
//};



//class Solution {
//public:
//    void func(char& s1, char& s2) {
//        char tmp = s1;
//        s1 = s2;
//        s2 = tmp;
//    }
//    void reverseString(vector<char>& s) {
//        int left = 0;
//        int right = s.size() - 1;
//        while (left < right) {
//            func(s[left], s[right]);
//            left++;
//            right--;
//        }
//    }
//};

//笔记注记
//规定vector<vector<int>> vec的长宽可以用:
//vector<vector<int>> vec(r,vector<int>(c));

//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> ans;
//        unordered_map<int, int> m;
//        for (auto i : nums1) {
//            m[i]++;
//        }
//        for (auto i : nums2) {
//            if (m.find(i) != m.end()) {
//                ans.push_back(i);
//                m[i]--;
//                if (m[i] == 0)m.erase(i);
//            }
//        }
//        return ans;
//    }
//};




//class Solution {
//public:
//    vector<int> diStringMatch(string s) {
//        int strsize = s.size();
//        int l = 0;
//        int r = strsize;
//        int index = 0;
//        vector<int> ans(strsize + 1);
//        while (l < r) {
//            ans[index++] = s[index] == 'I' ? l++ : r--;
//        }
//        ans[index] = l;
//        return ans;
//    }
//};

//class Solution {
//public:
//    vector<int> findDuplicates(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        vector<int> ans;
//        for (int i = 0; i < nums.size() - 1; i++) {
//            if (nums[i] == nums[i + 1]) {
//                ans.push_back(nums[i]);
//            }
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int maxnum = 0;
//        for (int i = 1; i < nums.size(); i++) {
//            nums[i] = max(nums[i], nums[i] + nums[i - 1]);
//            maxnum = max(maxnum, nums[i]);
//        }
//        return maxnum;
//    }
//};



//void PrintList(ListNode* l3);
//void PrintBool(bool a);
//
//class MyQueue {
//public:
//private:
//    stack<int>* headstack;
//    stack<int>* tailstack;
//    void remove() {
//        if (this->headstack->empty()) {
//            while (!this->tailstack->empty()) {
//                this->headstack->push(this->tailstack->top());
//                this->tailstack->pop();
//            }
//        }
//    }
//public:
//    MyQueue() {
//        this->headstack = new stack<int>();
//        this->tailstack = new stack<int>();
//    }
//
//    void push(int x) {
//        this->tailstack->push(x);
//    }
//
//    int pop() {
//        remove();
//        int tmp = this->headstack->top();
//        this->headstack->pop();
//        return tmp;
//    }
//
//    int peek() {
//        remove();
//        return this->headstack->top();
//    }
//
//    bool empty() {
//        if (this->headstack->empty() && this->tailstack->empty())
//            return true;
//        else return false;
//    }
//};


//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> sstack;
//        for (auto i : s) {
//            if (i == '(' || i == '[' || i == '{')
//                sstack.push(i);
//            else {
//                char tmp = sstack.top();
//                sstack.pop();
//                if (i == ')' && tmp == '(')
//                    continue;
//                else if (i == ']' && tmp == '[')
//                    continue;
//                else if (i == '}' && tmp == '{')
//                    continue;
//                else
//                    return false;
//            }
//        }
//        return true;
//    }
//};

//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        unordered_map<int, bool> m;
//        ListNode* dummyhead = new ListNode(0, head);
//        ListNode* p = dummyhead;
//        while (p->next) {
//            if (m.find(p->next->val) != m.end()) {
//                ListNode* tmp = p->next;
//                p->next = p->next->next;
//                delete tmp;
//            }
//            else {
//                m[p->next->val] = true;
//                p = p->next;
//            }
//        }
//        return dummyhead->next;
//    }
//};


//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* dummyHead = head;
//        ListNode* p = dummyHead;
//        ListNode* pre = nullptr;
//        while (p) {
//            ListNode* next = p->next;
//            p->next = pre;
//            pre = p;
//            p = next;
//        }
//        return pre;
//    }
//};


//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        ListNode* p = head;
//        while (p->val == val) {
//            ListNode* pre = p;
//            p = p->next;
//            delete pre;
//        }
//        ListNode* p1 = p;
//        while (p) {
//            ListNode* next = p->next;
//            if (next && next->val == val) {
//                p->next = next->next;
//                delete next;
//            }
//            p = p->next;
//        }
//        return p1;
//    }
//};

//class Solution {
//public:
//    void addNode(ListNode*& p, int number) {
//        if (p == nullptr)
//            p = new ListNode(number);
//        else {
//            ListNode* p1 = p;
//            while (p1->next != nullptr) {
//                p1 = p1->next;
//            }
//            p1->next = new ListNode(number);
//        }
//    }
//    void addNode(ListNode*& p1, ListNode* p2) {
//        if (p1 == nullptr)
//        {
//            p1 = p2;
//            return;
//        }
//        if (p2 == nullptr)
//            return;
//        ListNode* p = p1;
//        while (p->next != nullptr) {
//            p = p->next;
//        }
//        p->next = p2;
//    }
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        ListNode* list3 = nullptr;
//        while (list1 != nullptr && list2 != nullptr) {
//            if (list1->val < list2->val) {
//                addNode(list3, list1->val);
//                list1 = list1->next;
//            }
//            else {
//                addNode(list3, list2->val);
//                list2 = list2->next;
//            }
//        }
//        if (list1 == nullptr) {
//            addNode(list3, list2);
//        }
//        else {
//            addNode(list3, list1);
//        }
//        return list3;
//    }
//};



//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        unordered_map<char, int> m;
//        for (auto i : s) {
//            m[i]++;
//        }
//        for (auto i : t) {
//            if (m.find(i) == m.end()) {
//                return false;
//            }
//            else {
//                m[i]--;
//                if (m[i] == 0)
//                    m.erase(i);
//            }
//        }
//        return m.empty();
//    }
//};


//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        map<char, int> m;
//        for (auto i : ransomNote) {
//            if (m.find(i) == m.end()) {
//                m.insert(pair<char, int>(i, 1));
//            }
//            else {
//                m[i]++;
//            }
//        }
//        for (auto i : magazine) {
//            if (m.find(i) != m.end()) {
//                m[i]--;
//                if (m[i] == 0)
//                    m.erase(i);
//            }
//            else {
//                m[i]++;
//            }
//        }
//        return m.empty();
//    }
//};







//class Solution {
//public:
//    //vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
//    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c);
//};

//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> ans;
//        ans.push_back({ 1 });
//        for (int i = 1; i <= numRows; i++) {
//            ans.push_back(vector<int>(i+1));
//            for (int j = 0; j < i+1; j++) {
//                if (j == 0) {
//                    ans[i][j] = ans[i - 1][j];
//                }
//                else if (j == i) {
//                    ans[i][j] = ans[i - 1][j - 1];
//                }
//                else {
//                    ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
//                }
//            }
//        }
//        return ans;
//    }
//};