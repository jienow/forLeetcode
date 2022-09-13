//#include "head.h"
//
//
//template<class T>
//class Print {
//public:
//	Print(string* str):smart_ptr(str) {};
//	//virtual ~Print() {};
//
//	
//	static void println(vector<T>& v);
//
//private:
//	unique_ptr<string>* smart_ptr;
//};
//
//
//
//template<class T>
//static void Print<T>::println(vector<T>& v) {
//	cout << "{ ";
//	for (int i = 0; i < v.size(); i++) {
//		if (i == v.size() - 1)
//			cout << fmt::format("{0}", v[i]);
//		else
//			cout << fmt::format("{0},", v[i]);
//	}
//	cout << " }" << endl;
//}



//int guess(int n) {
//    int number = 6;
//    if (n > number)return -1;
//    else if (n < number)return 1;
//    return 0;
//}

//void func(Node* root)
//{
//	auto p = root;
//	queue<Node*> l;
//	l.push(p);
//	while (!l.empty()) {
//		int size = l.size();
//		for (int i = 0; i < size; i++) {
//
//			p = l.front();
//			l.pop();
//			cout << p->val;
//
//
//			if(p->left)l.push(p->left);
//			if(p->right)l.push(p->right);
//		}
//		cout << "#";
//		
//	}
//}
//
//void func1(Node* root) {
//	queue<Node*> q;
//	auto p = root;
//	while (p) {
//		q.push(p);
//		p = p->left;
//	}
//	while (!q.empty()) {
//		auto now = q.front();
//		q.pop();
//		while (now) {
//			cout << now->val;
//			now = now->next;
//		}
//		cout << "#";
//	}
//}

//void PrintList(ListNode* l3)
//{
//    while (l3 != nullptr) {
//        cout << l3->val << " ";
//        l3 = l3->next;
//    }
//    cout << endl;
//}
//void PrintBool(bool a)
//{
//    if (a)cout << "true";
//    else cout << "false";
//}
//void PrintDoMax(vector<vector<int>>& v) {
//	for (auto& i : v) {
//		cout << "{ ";
//		for (auto& j : i) {
//			cout << j << ' ';
//		}
//		cout << "} ";
//	}
//	cout << endl;
//}

//vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2)
//{
//    map<int, int> m;
//    for (auto& i : nums1)
//    {
//        auto it = m.find(i);
//        if (it == m.end())
//        {
//            m.insert(pair<int,int>(i, 1));
//        }
//        else
//        {
//            m[i]++;
//        }
//    }
//    vector<int> nums3;
//    for (auto& i : nums2)
//    {
//        auto it = m.find(i);
//        if (it != m.end() && m[i] != 0)
//        {
//            nums3.push_back(i);
//            m[i]--;
//        }
//    }
//    return nums3;
//}

//vector<vector<int>> Solution::matrixReshape(vector<vector<int>>& mat, int r, int c) {
//    deque<int> nums;
//    for (auto i : mat) {
//        for (auto j : i) {
//            nums.push_back(j);
//        }
//    }
//    vector<vector<int>> newMat;
//    for (int i = 0; i < r; i++) {
//        vector<int> newmat;
//        for (int j = 0; j < c; j++) {
//            auto it = nums.front();
//            nums.pop_front();
//            newmat.push_back(it);
//        }
//        newMat.push_back(newmat);
//    }
//    return newMat;
//}

