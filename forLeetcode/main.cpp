#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
using namespace std;
const int M = 30010, N = 25;
int n, m;
int f[M];
int main() {
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		int v, w; cin >> v >> w;
		for (int j = m; j >= v; j--)
			f[j] = max(f[j], f[j - v] + v * w);
	}
	cout << f[m];
	return 0;
}


//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 23, M = 80;
//int f[N][M];
//int n, m, k;
//int main() {
//	cin >> n >> m >> k;
//
//	memset(f, 0x3f, sizeof f);
//	f[0][0] = 0;
//
//	while (k--) {
//		int v1, v2, w;
//		cin >> v1 >> v2 >> w;
//		for (int i = n; i >= 0; i--)
//			for (int j = m; j >= 0; j--)
//				f[i][j] = min(f[i][j], f[max(0, i - v1)][max(0, j - v2)] + w);
//	}
//	cout << f[n][m];
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 110;
//int f[N][N], n, V, M;
//int main() {
//	cin >> n >> V >> M;
//	for (int i = 0; i < n; i++) {
//		int v, m, w; cin >> v >> m >> w;
//		for (int j = V; j >= v; j--)
//			for (int k = M; k >= m; k--)
//				f[j][k] = max(f[j][k], f[j - v][k - m] + w);
//	}
//	cout << f[V][M];
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 6010;
//int f[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		int v, w, s; cin >> v >> w >> s;
//		for (int j = m; j >= 0; j--)
//			for (int k = 0; k <= s && k * v <= j; k++)
//				f[j] = max(f[j], f[j - k * v] + w * k);
//	}
//	cout << f[m];
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 3010;
//int f[N],n, m;
//int main() {
//	cin >> n >> m;
//	f[0] = 1;
//	for (int i = 0; i < n; i++) {
//		int v; cin >> v;
//		for (int j = v; j <= m; j++)
//			f[j] += f[j - v];
//	}
//	cout << f[m];
//	return 0;
//}

//#include <iostream>
//#include <array>
//using namespace std;
//const int N = 1010;
//array<int, 4> v{ 10,20,50,100 };
//array<int, N> f;
//int n;
//int main() {
//	cin >> n;
//	f[0] = 1;
//	for (int i = 0; i < 4; i++)
//		for (int j = v[i]; j <= n; j++)
//			f[j] += f[j - v[i]];
//	cout << f[n] << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 1010;
//int v[]{ 10,20,50,100 };
//int f[N], m;
//int main() {
//	cin >> m;
//	f[0] = 1;
//	for (int i = 0; i < 4; i++)
//		for (int j = v[i]; j <= m; j++)
//			f[j] += f[j - v[i]];
//	cout << f[m];
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1010;
//int v[]{ 0,10,20,50,100 };
//int f[N];
//int n;
//int main() {
//	cin >> n;
//	f[0] = 1;
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 0; j <= n; j++) {
//			f[j] = f[j];
//			if (j >= v[i])f[j] += f[j - v[i]];
//		}
//	}
//	cout << f[n] << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 110;
//int f[N], n, m;
//int main() {
//	cin >> n >> m;
//	f[0] = 1;
//	for (int i = 0; i < n; i++) {
//		int v; cin >> v;
//		for (int j = m; j >= v; j--)
//			f[j] += f[j - v];
//	}
//	cout << f[m];
//	return 0;
//}


//#include <iostream>
//#include <stack>
//using namespace std;
//int main() {
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	cout << s.top() << endl;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010, M = 510;
//int f[N][M], n, V1, V2;
//int main() {
//	cin >> n >> V1 >> V2;
//	for (int i = 0; i < n; i++) {
//		int v1, v2; cin >> v1 >> v2;
//		for (int j = V1; j >= v1; j--)
//			for (int k = V2 - 1; k >= v2; k--) {
//				f[j][k] = max(f[j][k], f[j - v1][j - v2] + 1);
//			}
//	}
//	cout << f[V1][V2 - 1] << " ";
//	int cost = V2 - 1;
//	for (int k = 0; k <= V2 - 1; k++) {
//		if (f[V1][k] == f[V1][V2 - 1]) {
//			cost = min(cost, k);
//		}
//	}
//	cout << V2 - cost << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1010;
//int f[N], n, m, h;
//int main() {
//	cin >> m >> h >> n;
//	for (int i = 0; i < n; i++) {
//		int v, w;cin>>
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 34;
//int n, m, f[N];
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		int v, w; cin >> v; w = v;
//		for (int j = m; j >= v; j--)
//			f[j] = max(f[j], f[j - v] + w);
//	}
//	cout << f[m] << endl;
//	
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int n, m, f[N];
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		int v, w;
//		cin >> v >> w;
//		for (int j = m; j >= v; j--)f[j] = max(f[j], f[j - v] + w);
//	}
//	cout << f[n - 1];
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int n,arr[N], g[N], q[N];
//int main() {
//	while (cin >> arr[n])n++;
//
//	int res = 0;
//	for (int i = 0; i < n; i++) {
//		q[i] = 1;
//		for (int j = 0; j < i; j++)
//			if (arr[j] >= arr[i])
//				q[i] = max(q[i], q[j] + 1);
//	}
//	for (int i = 0; i < n; i++)res = max(res, q[i]);
//	cout << res << endl;
//
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		int k = 0;
//		while (k < cnt && g[k] <= arr[i])k++;
//		g[k] = arr[i];
//		if (k >= cnt)cnt++;
//	}
//	cout << cnt << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1010;
//int n, arr[N], f[N];
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &arr[i]);
//
//	for (int i = 1; i <= n; i++) {
//		f[i] = arr[i];
//		for (int j = 1; j <= i; j++)
//			if (f[i] > f[j])
//				f[i] = max(f[i], f[j] + arr[i]);
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++)res = max(res, f[i]);
//	cout << res << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 5010;
//PII arr[N];
//int n, f[N];
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d%d", &arr[i].first, &arr[i].second);
//
//	sort(arr + 1, arr + n + 1);
//
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for (int j = 1; j < i; j++)
//			if (arr[i].second > arr[j].second)
//				f[i] = max(f[i], f[j] + 1);
//	}
//	for (int i = 1; i <= n; i++)res = max(f[i], res);
//
//	cout << res << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 60;
//int arr[N][N], f[N + N][N][N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	//1 <= x <= n
//	//1 <= k-x <= m
//	//k-m <= x <= k-1
//	/*for (int k = 2; k <= n + m; k++)
//		for (int x1 = max(1, k - m); x1 <= min(n, k - 1); x1++)
//			for (int x2 = max(1, k - m); x2 <= min(n, k - 1); x2++) {
//				int t = arr[x1][k - x1];
//				if (x1 != x2)t += arr[x2][k - x2];
//				for (int a = 0; a <= 1; a++)
//					for (int b = 0; b <= 1; b++)
//						f[k][x1][x2] = max(f[k][x1][x2], f[k - 1][x1 - a][x2 - b]) + t;
//			}
//	cout << f[n + m][n][n];*/
//	
//	for (int k = 2; k <= n + m; k++)
//		for (int x1 = 1; x1 <= k; x1++)
//			for (int x2 = 1; x2 <= k; x2++) {
//				int t = arr[x1][k - x1];
//				if (x1 != x2)t += arr[x2][k - x2];
//				int& x = f[k][x1][x2];
//				x = max(x, f[k-1][x1][x2] + t);
//				x = max(x, f[k-1][x1 - 1][x2] + t);
//				x = max(x, f[k-1][x1][x2 - 1] + t);
//				x = max(x, f[k-1][x1 - 1][x2 - 1] + t);
//			}
//	cout << f[n + m][n][n] << endl;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 110;
//int n, arr[N], f[N], g[N];
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)scanf("%d", &arr[i]);
//	
//	for (int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for (int j = 1; j <= i; j++)
//			if (arr[i] > arr[j])
//				f[i] = max(f[i], f[j] + 1);
//	}
//	for (int i = n; i >= 1; i--) {
//		g[i] = 1;
//		for (int j = n; j >= i; j--)
//			if (arr[i] > arr[j])
//				f[i] = max(f[i], f[j] + 1);
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++)res = max(res, f[i] + g[i] - 1);
//	cout << n - res << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1010;
//int arr[N], f[N], g[N];
//int n;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)scanf("%d", &arr[i]);
//	for (int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for (int j = 1; j < i; j++)
//			if (arr[i] > arr[j])
//				f[i] = max(f[i], f[j] + 1);
//	}
//	for (int i = n; i >= 1; i--) {
//		g[i] = 1;
//		for (int j = n; j > i; j--)
//			if (arr[i] > arr[j])
//				g[i] = max(g[i], g[j] + 1);
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++)res = max(res, f[i] + g[i] - 1);
//	cout << res << endl;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 110;
//int arr[N], f[N];
//int T;
//int main() {
//	cin >> T;
//	while (T--) {
//		int n; cin >> n;
//		for (int i = 1; i <= n; i++)scanf("%d", &arr[i]);
//		int res = 0;
//		for (int i = 1; i <= n; i++) {
//			f[i] = 1;
//			for (int j = 1; j < i; j++)
//				if (arr[i] > arr[j])
//					f[i] = max(f[i], f[j] + 1);
//			res = max(res, f[i]);
//		}
//		for (int i = n; i >= 1; i--) {
//			f[i] = 1;
//			for (int j = n; j > i; j--)
//				if (arr[i] > arr[j])
//					f[i] = max(f[i], f[j] + 1);
//			res = max(res, f[i]);
//		}
//		cout << res << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 15;
//int f[N + N][N][N], w[N][N];
//int n, a, b, c;
//int main() {
//	scanf("%d", &n);
//	while (cin >> a >> b >> c, a || b || c)w[a][b] = c;
//	
//	for (int k = 2; k <= n + n; k++)
//		for (int i1 = 1; i1 <= n; i1++)
//			for (int i2 = 1; i2 <= n; i2++) {
//				int j1 = k - i1, j2 = k - i2;
//				if (j1 >= 1 && j1 <= n && j2 >= 1 && j2 <= n) {
//					int t = w[i1][j1];
//					if (i1 != i2)t += w[i2][j2];
//					int& x = f[k][i1][i2];
//					x = max(x, f[k - 1][i1 - 1][i2 - 1] + t);
//					x = max(x, f[k - 1][i1 - 1][i2] + t);
//					x = max(x, f[k - 1][i1][i2 - 1] + t);
//					x = max(x, f[k - 1][i1][i2] + t);
//				}
//			}
//	cout << f[n + n][n][n];
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 15;
//int f[N * 2][N][N], w[N][N];
//int n, a, b, c;
//int main() {
//	cin >> n;
//	while (cin >> a >> b >> c, a || b || c)w[a][b] = c;
//
//	for (int k = 2; k <= n + n; k++)
//		for (int i1 = 1; i1 <= n; i1++)
//			for (int i2 = 1; i2 <= n; i2++) {
//				int j1 = k - i1, j2 = k - i2;
//				if (j1 >= 1 && j1 <= n && j2 >= 1 && j2 <= n) {
//					int t = w[i1][j1];
//					if (i1 != i2)t += w[i2][j2];
//					int& x = f[k][i1][i2];
//					x = max(x, f[k - 1][i1 - 1][i2 - 1] + t);
//					x = max(x, f[k - 1][i1 - 1][i2] + t);
//					x = max(x, f[k - 1][i1][i2 - 1] + t);
//					x = max(x, f[k - 1][i1][i2]);
//				}
//			}
//	cout << f[n + n][n][n];
//	return 0;
//}


//#include <iostream>	
//#include <algorithm>
//using namespace std;
//const int N = 110;
//int f[N][N], s[N][N];
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &s[i][j]);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (i == 1 && j == 1)f[i][j] = s[i][j];
//			else {
//				f[i][j] = 1e9;
//				if (i > 1)f[i][j] = min(f[i - 1][j] + s[i][j], f[i][j]);
//				if (j > 1)f[i][j] = min(f[i][j - 1] + s[i][j], f[i][j]);
//			}
//	cout << f[n][n] << endl;
//	return 0;
//}
 

//#include <iostream>
//using namespace std;
//const int N = 110;
//int f[N][N], s[N][N];
//int n, m, T;
//int main() {
//	cin >> T;
//	while (T--) {
//		cin >> n >> m;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				cin >> s[i][j];
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				f[i][j] = max(f[i - 1][j], f[i][j - 1]) + s[i][j];
//		cout << f[n][m] << endl;
//	}
//	return 0;
//}
 
//#include <iostream>
//#include <algorithm>
//#include <limits.h>
//using namespace std;
//const int N = 5e4 + 10;
//typedef pair<int, int> PII;
//PII arr[N];
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
// 		int w, s;
//		scanf("%d%d", &w, &s);
//		arr[i].first = w + s;
//		arr[i].second = w;
//	}
//	sort(arr, arr + n);
//
//	int res = INT_MIN;
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		int w = arr[i].second, s = arr[i].first - w;
//		res = max(res, sum - s);
//		sum += w;
//	}
//	cout << res;
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//int arr[N], n;
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//	sort(arr, arr + n);
//	int res = 0;
//	for (int i = 0; i < n; i++)res += abs(arr[i] - arr[n / 2]);
//	cout << res << endl;
//	return 0;
//}

//#include <iostream> 
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 10;
//int arr[N], n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//	sort(arr, arr + n);
//	LL res = 0;
//	for (int i = 0; i < n; i++)res += arr[i] * (n - i - 1);
//	printf("%d\n", res);
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	/*vector v{ 1,2,3,4 };
//	sort(v.rbegin(), v.rend());
//	for (auto i : v)cout << i << " ";*/
//	int arr[]{1,2,3,4};
//	//sort(arr, arr + 4);
//	sort(arr + 4, arr);
//	for (auto i : arr)cout << i << " ";
//	return 0;
//}

//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	priority_queue<int, vector<int>, greater<int>> heap;
//	for (int i = 0; i < n; i++) {
//		int x; cin >> x;
//		heap.push(x);
//	}
//	int res = 0;
//	while (heap.size() > 1) {
//		int a = heap.top(); heap.pop();
//		int b = heap.top(); heap.pop();
//		res += a + b;
//		heap.push(a + b);
//	}
//	cout << res << endl;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//struct Range{
//	int l,r;
//	bool operator<(Range const& w) {
//		return l < w.l;
//	}
//}range[N];
//int n;
//int main() {
//	int st, ed; scanf("%d%d", &st, &ed);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)scanf("%d%d", &range[i].l, &range[i].r);
//
//	sort(range, range + n);
//
//	int res = 0;
//	bool success = false;
//	for (int i = 0; i < n; i++) {
//		int j = i, r = -2e9;
//		while (j < n && range[j].l <= st) {
//			r = max(r, range[j].r);
//			j++;
//		}
//		if (r < st) {
//			res = -1;
//			break;
//		}
//		res++;
//		if (r >= ed) {
//			success = true;
//			break;
//		}
//		st = r;
//		i = j - 1;
//	}
//	if (!success)res = -1;
//	printf("%d", res);
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//struct Range {
//	int l, r;
//	bool operator<(Range const& w) {
//		return l < w.l;
//	}
//}range[N];
//int main() {
//	int st, ed; scanf("%d%d", &st, &ed);
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) scanf("%d%d", &range[i].l, &range[i].r);
//
//	sort(range, range + n);
//
//	bool success = false;
//	int res = 0;
//	for (int i = 0; i < n; i++) {
//		int j = i, r = -2e9;
//		while (j < n && range[i].l <= st) {
//			r = max(range[i].r, r);
//			j++;
//		}
//		if (r < st) {
//			r = -1;
//			break;
//		}
//		res++;
//		if (r >= ed) {
//			success = true;
//			break;
//		}
//		st = r;
//		i = j - 1;
//	}
//	if (!success) res = -1;
//	printf("%d", res);
//	return 0;
//}


//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//struct Range{
//	int l,r;
//	bool operator<(Range const& w) {
//		return l < w.l;
//	}
//}range[N];
//int n;
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)scanf("%d%d", &range[i].l, &range[i].r);
//	sort(range, range + n);
//
//	priority_queue<int, vector<int>, greater<int>> heap;
//
//	for (int i = 0; i < n; i++) {
//		auto r = range[i];
//		if (heap.empty() || heap.top() >= r.l)heap.push(r.r);
//		else {
//			heap.pop();
//			heap.push(r.r);
//		}
//	}
//	cout << heap.size() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int arr[N], n, k;
//int quick_sort(int l, int r, int k) {
//	if (l >= r)return arr[k];
//	int x = arr[l + r >> 1], i = l - 1, j = r + 1;
//	while (i < j) {
//		do i++; while (arr[i] < x);
//		do j--; while (arr[j] > x);
//		if (i < j)swap(arr[i], arr[j]);
//	}
//	int s = j - l + 1;
//	if (s >= k)return quick_sort(l, j, k);
//	else return quick_sort(j + 1, r, k - s);
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//	cout << quick_sort(0, n - 1, k);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int arr[N];
//int n;
//void quick_sort(int l, int r) {
//	if (l >= r)return;
//	int x = arr[(l + r) >> 1], i = l - 1, j = r + 1;
//	while (i < j) {
//		do i++; while (arr[i] < x);//保证j那边一定是>=x
//		do j--; while (arr[j] > x);//保证i那边一定是<=x
//		if (i < j)swap(arr[i], arr[j]);
//	}
//	//分完之后，一定会分成两边，一边是<=x,一边是>=x，所以j会在左边的最大的位置，i会在右边的最小的位置
//	quick_sort(l, j);
//	quick_sort(j + 1, r);
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//	quick_sort(0, n - 1);
//	for (int i = 0; i < n; i++)printf("%d", arr[i]);
//	return 0;
//}


//#include <iostream>
//#include <unordered_set>
//#include <unordered_map>
//using namespace std;
//unordered_set<char> s{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N'
//,'O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//int main() {
//	string str; cin >> str;
//	unordered_map<char, char> map;
//	for (int i = 0; i < str.size(); i++) {
//		char c; cin >> c;
//		s.erase(str[i]);
//		if (map.count(str[i]) && map[str[i]] != c) {
//			cout << "Failed" << endl;
//			return 0;
//		}
//		else {
//			map.insert({ str[i], c });
//		}
//	}
//	if (s.size() != 0) {
//		cout << "Failed" << endl;
//		return 0;
//	}
//	string n; cin >> n;
//	for (int i = 0; i < n.size(); i++) {
//		cout << map[n[i]];
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//const int N = 5010;
//struct mpair
//{
//	int number;
//	int gress;
//};
//vector<mpair> v;
//int main(){
//	int n, m; cin >> n >> m;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		cin >> v[i].number >> v[i].gress;
//	m = floor(m * 1.5);
//	sort(v.begin(), v.end(), [](mpair& a, mpair& b) {
//		if (a.gress == b.gress)return a.number < b.number;
//		return a.gress > b.gress;
//		});
//	int ges = v[m - 1].gress, reshu = m;
//	for (int i = m; i < n; i++) {
//		if (ges == v[i].gress)reshu++;
//		else break;
//	}
//
//	cout << ges << " " << reshu << endl;
//	for (int i = 0; i < reshu; i++)
//		cout << v[i].number << " " << v[i].gress << endl;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int N = 5010;
//struct mpair
//{
//	int number;
//	int gress;
//};
//vector<mpair> v;
//int main(){
//	int n, m; cin >> n >> m;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		cin >> v[i].number >> v[i].gress;
//	m = floor((m * 1.5));
//	sort(v.begin(), v.end(), [](mpair& a, mpair& b) {
//		if (a.gress == b.gress)return a.number < b.number;
//		return a.gress > b.gress;
//		});
//	int ges = v[m - 1].gress, reshu = m;
//	for (int i = m; i < n; i++) {
//		if (ges == v[i].gress)reshu++;
//		else break;
//	}
//
//	cout << v[m - 1].gress << " " << m << endl;
//	for (int i = 0; i < reshu; i++)
//		cout << v[i].number << " " << v[i].gress << endl;
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//struct Range
//{
//	int l, r;
//	bool operator<(Range const& w)const {
//		return r < w.r;
//	}
//}range[N];
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int l, r; cin >> l >> r;
//		range[i]={ l,r };
//	}
//	sort(range, range + N);
//	int res = 0, ed = -2e9;
//	for (int i = 0; i < n; i++) {
//		if (ed < range[i].l) {
//			res++;
//			ed = range[i].r;
//		}
//	}
//	cout << res << endl;
//	return 0;
//}



//#include <iostream>
//#include <sstream>
//#include <boost/random/random_device.hpp>
//using namespace std;
//int n, number;
//int main() {
//	cin >> n;
//	stringstream ans;
//	for (int i = n; i >= 0; i--) {
//		cin >> number;
//		if (number) {
//			if (i != n && number > 0)ans << "+";//正数开始不能加"+"
//			if (i==0 || abs(number) != 1)ans << number;//末位或者非0，加number
//			if (number == -1 && i)ans << "-";//-1特判，在i非0情况下
//			if (i > 1)ans << "x^" << i;
//			if (i == 1) ans << "x";
//		}
//	}
//	cout << ans.str();
//	return 0;
//}


//#include <iostream>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//int n;
//int main() {
//	cin >> n;
//	stringstream ans;
//	for (int i = n; i >= 0; i--) {
//		int number; cin >> number;
//		{
//			if (number == 0)continue;
//			if (i == n) {
//				if (abs(number) != 1)
//					ans << number;
//				else if (number < 0)ans << "-";
//				if(n==0)
//			}
//			else {
//				bool flag = number > 0 ? true : false;
//				number = abs(number);
//				ans << (flag > 0 ? "+" : "-");
//				if (number != 1 ||i == 0)ans << number;
//			}
//		}
//		{
//			if (i == 0)continue;
//			else {
//				ans << "x^" << i;
//			}
//		}
//	}
//	cout << ans.str();
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//const int N = 10100;
//int n, m;
//long long arr[N];
//int main() {
//	cin >> n >> m;
//	int zhi = 0, idx = 0;
//	arr[idx++] = pow(n, zhi++);
//	arr[idx++] = pow(n, zhi++);
//	while (idx <= m) {
//		int index = idx - 1;
//		for (int i = 0; i < index; i++) {
//			arr[idx++] = arr[index] + arr[i];
//		}
//		arr[idx++] = pow(n, zhi++);
//	}
//	cout << arr[m-1];
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 30;
//int f[30010], w[N], v[N];
//int n, m;
//int main() {
//	cin >> n >> m;
//	/* 在这种背包问题上：一个轴是物品个数，另一个轴是横坐标
//	*  这个题的横坐标是总体权重
//	*  一个是物品，一个是体积,n做体积
//	*/
//	for (int i = 0; i < m; i++) {
//		cin >> w[i] >> v[i];
//		v[i] *= w[i];
//		/* 我们需要集合，一个是物品集w,另一个是物品权重集v
//		*  在这个题目中，物品权重集，需要计算
//		*/
//	}
//	for(int i = 0;i < m;i ++)
//		for (int j = n; j >= w[i]; j--) {//从最大权重集合开始，向物品集合减小
//			f[j] = max(f[j], f[j - w[i]] + v[i]);
//			/* j >= w[i]的原因是这里的j-w[i] >= 0
//			*  f[j-w[i]]就是下标减去物品集，当时的物品加上此时的权重集就是结果
//			*/
//		}
//	//找很坐标，就是非物品轴的最大值
//	cout << f[n];
//	return 0;
//}


//#include <iostream>
//#include <set>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int n;
//int arr[N][N];
//set<pair<int, int>> s;
//int add_all(int x, int y) {
//	int res = 0;
//	for (int i = 0; i < n; i++)res += arr[x][i];
//	for (int i = 0; i < n; i++)res += arr[i][y];
//	return res;
//}
//int main() {
//	cin >> n;
//	for(int i = 0;i < n;i ++)
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 0)s.insert({ i,j });
//		}
//	int ans = 0;
//	for (auto& [x, y] : s) {
//		ans = max(ans, add_all(x, y));
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <regex>
//using namespace std;
//vector<string> split(string& str, string& c) {
//	regex re(c);
//	return {
//		sregex_token_iterator(str.begin(),str.end(),re,-1),
//		sregex_token_iterator()
//	};
//}
//int main() {
//	string str{ "hello  world  cpp" };
//	string c{ "  "};
//	auto v = split(str, c);
//	for (auto& i : v) {
//		cout << i << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <sstream>
//using namespace std;
//int main() {
//	double a = 10.0; string b;
//	stringstream ss;
//	ss << a; ss >> b;
//	cout << b << endl
//		<< typeid(b).name() << endl;
//	return 0;
//}



//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//int main() {
//	vector<int> v{ 1,2,3,4,5 };
//	map<int, string> m{ {1,"123"},{2,"123553"} };
//	for (auto& [number, name] : m) {
//		cout << number << "," << name << endl;
//	}
//	for (auto& i : m) {
//		cout << i.first << "," << i.second << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> func() {
//	vector<int> v{ 1,2,3,4,5 };
//	return { v.begin(),v.end() };
//}
//int* func1() {
//	int v[]{1,2,3,4,5};
//	auto a = v;
//	auto b = v + 5;
//	return { a,b };
//}
//int main() {
//	auto v = func();
//	for (auto i : v) {
//		cout << i << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <regex>
//#include <vector>
//using namespace std;
//vector<string> split(string& str, string& r) {
//	regex re(r + "\*");
//	return{
//		sregex_token_iterator(str.begin(),str.end(),re,-1),
//		sregex_token_iterator()
//	};
//}
//int main() {
//	string str{ "hello world   c++   shen jie" };
//	string r{ "  " };
//	auto v = split(str, r);
//	for (auto& i : v) {
//		cout << i << endl;
//	}
//	
//	return 0;
//}




//#include <iostream>
//#include <vector>	
//#include <regex>
//using namespace  std;
//vector<string> split(string a, string rege) {
//	
//	regex re(rege);
//	sregex_token_iterator first{ a.begin(),a.end(),re,-1 }, last;
//	return { first,last };
//	/*return {
//		sregex_token_iterator {	a.begin(),a.end(),[rege]()->regex {
//			regex re(rege);
//			return re; }
//		,-1},
//		sregex_token_iterator()
//	};*/
//}
//
////std::vector<std::string> split(const std::string str, const std::string regex_str)
////{   // a yet more concise form!
////	return { std::sregex_token_iterator(str.begin(), str.end(), std::regex(regex_str), -1), std::sregex_token_iterator() };
////}
//int main() {
//	string a = "hello world c++ shen jie";
//	string re = "  ";
//	auto b = split(a, re);
//	for (auto i : b) {
//		cout << i << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <vector>
//#include <regex>
//#include <string>
//
//std::vector<std::string> split(const std::string& input,
//    const std::string& regex)
//{
//    std::regex re(regex);
//    std::sregex_token_iterator first{ input.begin(),input.end(),re,-1 }, last;
//    //-1 ： sub 作为子匹配符，如果是0，则选择匹配的部分，如果是-1则选择不匹配的那个部分
//    //last：这是默认构造函数，默认构造成为序列的结束值
//    return { first, last };
//}
//
//
//int main()
//{
//    std::string long_str = "this_is_why_we_play";
//    std::string comma = "_";
//    auto res_str = split(long_str, comma);
//    for (auto str : res_str)
//        std::cout << "str is: " << str << std::endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <regex>
//#include <vector>
//
//std::vector<std::string> split(const std::string str, const std::string regex_str)
//{   // a yet more concise form!
//    //return { std::sregex_token_iterator(str.begin(), str.end(), std::regex(regex_str), -1), std::sregex_token_iterator() };
//    return {  std::sregex_token_iterator(str.begin(), str.end(), std::regex(regex_str), -1), std::sregex_token_iterator() };
//}
//
//int main()
//{
//    std::string input_str = "lets split this";
//    std::string regex_str = " ";
//    auto tokens = split(input_str, regex_str);
//    for (auto& item : tokens)
//    {
//        std::cout << item << std::endl;
//    }
//}

//#include <iostream>
//using namespace std;
//int main() {
//	std::string s = "scott>=tiger>=mushroom";
//	std::string delimiter = ">=";
//
//	/*size_t last = 0, next = 0;*/
//	/*while ((next = s.find(delimiter, last)) != string::npos) 	{
//		cout << s.substr(last, next - last) << endl;
//		last = next + delimiter.size();
//	} cout << s.substr(last) << endl;*/
//	for (size_t last = 0, next = 0; next < s.size(); next = s.find(delimiter, last)) {
//		cout << s.substr(last, next - last) << endl;
//		last = next + delimiter.size();
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <sstream>
//using namespace std;
//int main() {
//	string a = "hello world";
//	stringstream ss(a);
//	for (string i; ss >> i;) {
//		cout << i << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <sstream>
//using namespace std;
//class mystring{
//public:
//	mystring(string val) :val(val) {};
//	~mystring() {};
//	string operator+(int a) {
//		stringstream ss; ss << a;
//		return this->val + ss.str();
//	}
//private:
//	string val;
//};
//int main() {
//	string a = "123";
//	stringstream ss;
//	ss << a;
//	int b; ss >> b;
//	cout << b << endl
//		<< typeid(b).name() << endl;
//	string c = to_string(b);
//	cout << c << endl
//		<< typeid(c).name() << endl;
//	return 0;
//}


//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 30;
//typedef long long LL;
//LL f[N], v[N], n, m;
//LL w[N];
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i] >> v[i];
//		v[i] *= w[i];
//	}
//	for (int i = 0; i < n; i++)
//		for (int j = m; j >= w[i]; j--)
//			f[j] = max((int)f[j], int(f[j - w[i]] + v[i]));
//	cout << f[m];
//	return 0;
//}


//#include<iostream>
//#include<sstream>
//#include<cstring>
//#include<vector>
//using namespace std;
//int main() {
//	string ma; cin >> ma;
//	istringstream is(ma);
//	string number, tmp;
//	while (getline(is,tmp,'-')) {
//		number += tmp;
//	}
//	char a = number.back();
//	number.pop_back();
//	long long ans = 0;
//	int idx = 1;
//	for (auto i : number) {
//		ans += idx++ * (i - '0');
//	}
//	ans %= 11;
//	if (ans == 10)ans = 'X';
//	else ans += '0';
//
//	if (ans == a) 
//		cout << "Right";
//	else {
//		ma[ma.size() - 1] = ans;
//		cout << ma;
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//string endName;
//int money, allMoney;
//inline void init(string& name,
//					int& qimo, 
//					int& banji,
//					bool& ganbu, 
//					bool& xibu,
//					int&lunwun) 
//{
//	cin >> name;
//	cin >> qimo >> banji;
//	char ch;
//	cin >> ch; ganbu = ch == 'Y' ? true : false;
//	cin >> ch; xibu = ch == 'Y' ? true : false;
//	cin >> lunwun;
//}
//int yuanshi(int qimo, int lunwun) {
//	return qimo > 80 && lunwun >= 1 ? 8000 : 0;
//}
//int wusi(int qimo, int banji) {
//	return qimo > 85 && banji > 80 ? 4000 : 0;
//}
//int chengyou(int qimo) {
//	return qimo > 90 ? 2000 : 0;
//}
//int xijiang(int qimo, int  xibu) {
//	return qimo > 85 && xibu ? 1000 : 0;
//}
//int bangong(int banji,int ganbu) {
//	return banji > 80 && ganbu ? 850 : 0;
//}
//int main() {
//	int n; cin >> n;
//	while (n--)
//	{
//		string name; 
//		int qimo, banji, lunwun;
//		bool ganbu, xibu;
//		init(name, qimo, banji, ganbu, xibu,lunwun);
//		int m = yuanshi(qimo, lunwun) +
//			wusi(qimo, banji) +
//			chengyou(qimo) +
//			xijiang(qimo, xibu) +
//			bangong(banji, ganbu);
//		allMoney += m;
//		endName = m > money ? name : endName;
//		money = max(m, money);
//	}
//	cout << endName << endl
//		<< money << endl
//		<< allMoney << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 20010;
//int f[N], v[N], w[N], n, m;
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i];
//		v[i] = w[i];
//	}
//	for (int i = 0; i < n; i++)
//		for (int j = m; j >= v[i]; j--)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	cout << m - f[m];
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 10000;
//int f[N], v[N], w[N], n, m;
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++)cin >> v[i] >> w[i];
//	for (int i = 0; i < n; i++)
//		for (int j = m; j >= v[i]; j--)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	cout << f[m];
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int f[N], v[N], w[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> v[i] >> w[i];
//
//	for (int i = 0; i < n; i++)
//		for (int j = m; j >= v[i]; j--)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	cout << f[m];
//	return 0;
//}

//#include<iostream>
//#include <algorithm>
//using namespace std;
//const int N = 25;
//bool st[N];
//int f[N];
//int n, ans;
//bool judge() {
//	int minNum = f[0];
//	for (int i = 0; i < n; i++) {
//		if (minNum - 1 > f[i])return false;
//		minNum = min(minNum, f[i]);
//	}
//	return true;
//}
//void dfs(int u) {
//	if (u == n) {
//		if (judge())ans++;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!st[i]) {
//			f[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			f[u] = 0;
//			st[i] = false;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	dfs(0);
//	cout << ans;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 50;
//char ch[N];
//int W[N];
//int main() {
//	char s;
//	for (int i = 0; cin >> s && s != 'E'; i++) {
//		if (s == 'W')W[i] = 1;
//		else W[i] = 2;
//	}
//	int w = 0;
//	int l = 0;
//	for (int i = 0; 1; i++) {
//		if (W[i] == 1)w++;
//		if (W[i] == 2) l++;
//		if (W[i] == 0) {
//			cout << w << ":" << l << endl;
//			break;
//		}
//		if (w - l >= 2 || l - w >= 2) {
//			if (w >= 11 || l >= 11) {
//				cout << w << ":" << l << endl;
//				w = 0;
//				l = 0;
//			}
//		}
//	}
//	w = 0;
//	l = 0;
//	cout << endl;
//	for (int i = 0; 1; i++) {
//		if (W[i] == 1)w++;
//		if (W[i] == 2) l++;
//		if (W[i] == 0) {
//			cout << w << ":" << l << endl;
//			break;
//		}
//		if (w - l >= 2 || l - w >= 2) {
//			if (w >= 21 || l >= 21) {
//				cout << w << ":" << l << endl;
//				w = 0;
//				l = 0;
//			}
//		}
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 110;
//int arr[N],ans;
//int main() {
//	int n; cin >> n;
//	int all = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		all += arr[i];
//	}
//	int pingjun = all / n;
//	for (int i = 0; i < n; i++) arr[i] -= pingjun;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == 0)continue;
//		arr[i + 1] += arr[i];
//		ans++;
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 5e6 + 10;
//int n, k,ans;
//int f[N], number[N],b[N];
//bool judge() {
//	int all = 0;
//	for (int i = 0; i < k; i++)all += f[i];
//	if (all < 2)return false;
//	for (int i = 2; i <= all/i; i++) {
//		if (all % i == 0)return false;
//	}
//	return true;
//}
//void dfs(int u, int a) {
//	if (u == k) {
//		if (judge())ans++;
//		/*for (int i = 0; i < k; i++)
//			cout << f[i] << " ";
//		cout << endl;*/
//		return;
//	}
//	for (int i = a; i < n; i++) {
//		f[u] = number[i];
//		dfs(u + 1, i + 1);
//		f[u] = 0;
//	}
//}
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)cin >> number[i];
//	dfs(0,0);
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//void befored(string zhongxu, string houxu) {
//	if (zhongxu.size() > 0) {
//		char ch = houxu.back();
//		cout << ch;
//		int k = zhongxu.find(ch);
//		//中序的k之前一定是一段，k+1之后一定是一段
//		//后序的k之前一定是一段，因为个数得相同
//		//k之后一直到最后一个的前一个是一段
//		befored(zhongxu.substr(0, k)//[0,k)
//			, houxu.substr(0, k));//[0,k)
//		befored(zhongxu.substr(k + 1)//[k+1,)
//			, houxu.substr(k, zhongxu.size() - k - 1));//[k,)
//	}
//}
//int main() {
//	string zhongxu, houxu;
//	cin >> zhongxu >> houxu;
//	befored(zhongxu, houxu);
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//long long ans, n, m;
//int gcd(long long a, long long b) {
//	if (b == 0)return a;
//	else return gcd(b, a % b);
//}
//int main() {
//	cin >> m >> n;
//	if (n == m)ans--;
//	n *= m;
//	for (long long  i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0 && gcd(i, n / i) == m) {
//			//n%i保证i是积的一个因子
//			//gcd(i,n/i)保证求到的一个因子是m
//			ans+=2;
//		}
//	}
//	cout << ans;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 10001;
//int f[N];
///*
//* f[1] = 1
//* f[2] = f[1] + 1
//* f[3] = f[1] + 1
//* f[4] = f[1] + f[2] + 1
//* f[5] = f[1] + f[2] + 1
//*/
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i / 2; j++) {
//			f[i] += f[j];
//		}
//		f[i] ++;
//	}
//	cout << f[n];
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int a, b, c, d;
//int l, r;
//vector<double> v;
//int f(double l) {
//	return pow(l, 3) * a
//		+ pow(l, 2) * b
//		+ pow(l, 1) * c
//		+ d;
//}
//double dfs(double l, double r) {
//	while (l < r) {
//		int mid = l + r / 2;
//		if (f(l) * f(r) < 0)dfs(l + 1, r - 1);
//		else if (f(l) * f(r) > 0)break;
//		else return f(l) == 0 ? l : r;
//	}
//}
//int main() {
//
//	cin >> a >> b >> c >> d;
//	l = -100, r = 100;
//	double x1 = dfs(l,r);
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//void dfs(int beichu, int chushu) {
//	if (beichu == 0)return;
//
//	int shang = beichu / chushu;
//	int yushu = beichu % chushu;
//	if (yushu < 0)shang++, yushu -= chushu;
//
//	if (yushu >= 10)yushu = 'A' + yushu - 10;
//	else yushu += '0';
//
//	dfs(shang, chushu);
//
//	printf("%c", yushu);
//}
//int main() {
//	int beichu, chushu;
//
//	cin >> beichu >> chushu;
//	cout << beichu << "=";
//	dfs(beichu, chushu);
//	printf("(base%d)", chushu);
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N = 6010;
//int n;
//int e[N], ne[N], h[N], idx;
//int f[N][2], happy[N];
//bool has_fa[N];
//
//void add(int a, int b) {
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void dfs(int u) {
//    f[u][1] = happy[u];
//    for (int i = h[u]; i != -1; i = ne[i]) {
//        int j = e[i];
//        dfs(j);
//        f[u][0] += max(f[j][0], f[j][1]);
//        f[u][1] += f[j][0];
//    }
//}
//
//int main() {
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)scanf("%d", &happy[i]);
//
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < n - 1; i++) {
//        int a, b; scanf("%d", &a, &b);
//        has_fa[a] = true;
//        add(b, a);
//    }
//
//    int root = 1;
//    while (has_fa[root]) root++;
//    dfs(root);
//
//    printf("%d\n", max(f[root][0], f[root][1]));
//
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//typedef long long LL;
//int n;
//int change(int c) {
//	if (c == 10)return 'A';
//	if (c == 11)return 'B';
//	if (c == 12)return 'C';
//	if (c == 13)return 'D';
//	if (c == 14)return 'E';
//	if (c == 15)return 'F';
//	return c + '0';
//}
//int exchange(char c) {
//	if (c == 'A')return 10;
//	if (c == 'B')return 11;
//	if (c == 'C')return 12;
//	if (c == 'D')return 13;
//	if (c == 'E')return 14;
//	if (c == 'F')return 15;
//	return c - '0';
//}
//string N(string a) {
//	LL t = 0;
//	string v;
//	LL l = 0, r = a.size() - 1;
//	while (l <= a.size() && r >= 0) {
//		char ch = a[r];
//		char ch2 = a[l];
//		LL number2 = exchange(ch2);
//		LL number = exchange(ch);
//		t += number + number2;
//		v.push_back(change(t % n));
//		t /= n;
//		l++, r--;
//	}
//	while (t) {
//		v.push_back(change(t % n));
//		t /= n;
//	}
//	reverse(v.begin(), v.end());
//	return v;
//}
//bool judge(string s) {
//	int l = 0, r = s.size() - 1;
//	while (l < r) {
//		if (s[l] != s[r])return false;
//		l++, r--;
//	}
//	return true;
//}
//
//int main() {
//	cin >> n;
//	string number; cin >> number;
//	int index = 0;
//	while (index < 30) {
//		if (judge(number)) {
//			printf("STEP=%d", index);
//			return 0;
//		}
//		number = N(number);
//		index++;
//	}
//
//	puts("impossible");
//	return 0;
//}





//#include <iostream>
//#include <algorithm>
//using namespace std;
//string s[25];
//bool cmp(string a, string b) {
//	return a + b > b + a;
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> s[i];
//	sort(s + 1, s + n + 1, cmp);
//	for (int i = 0; i <= n; i++)cout << s[i];
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N = 310;
//int n, m;
//int h[N][N];
//int f[N][N];
//int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//
//int dp(int i, int j) {
//    int& v = f[i][j];
//    if (v != -1)return v;
//
//    v = 1;
//    for (int k = 0; k < 4; k++) {
//        int x = dx[k] + i, y = dy[k] + j;
//        if (x >= 1 && y >= 1 && x <= n && y <= m && h[x][y] <= h[i][j])
//            v = max(v, dp(x, y)+1);
//    }
//
//    return v;
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//
//    memset(f, -1, sizeof f);
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            scanf("%d", &h[i][j]);
//
//
//    int res = 0;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            res = max(res, dp(i, j));
//
//    printf("%d\n", res);
//
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//string run(int x, int i = 0, string a = "") {
//	if (x == 0)return "0";
//	do
//	{
//		if (x & 1) {
//			/*string b;
//			if (i == 1)b = "2";
//			else b = "2(" + run(i) + ")";
//			if (a == "")a = b;
//			else a = b + "+" + a;*/
//			a = (i == 1 ? "2" : "2(" + run(i) + ")") + (a == "" ? "" : "+") + a;
//		}
//	} while (i++, x >>= 1);
//	return a;
//}
//int main() {
//	int n; cin >> n;
//	cout << run(n);
//
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> mul(vector<int> A, int b) {
//	int tmp = 0;
//	vector<int> c;
//	for (int i = 0; i < A.size() || tmp; i++) {
//		if (i < A.size())tmp += A[i] * b;
//		c.push_back(tmp % 10);
//		tmp /= 10;
//	}
//	return c;
//}
//vector<int> add(vector<int>& v, vector<int> ans) {
//	int tmp = 0;
//	vector<int> c;
//	int i = 0;
//	for (; i < v.size() && i < ans.size(); i++) {
//		tmp += v[i] + ans[i];
//		c.push_back(tmp % 10);
//		tmp /= 10;
//	}
//	auto& oth = i < v.size() ? v : ans;
//	while (i < oth.size()) {
//		tmp += oth[i++];
//		c.push_back(tmp % 10);
//		tmp /= 10;
//	}
//	return c;
//}
//
//int main() {
//	int n; cin >> n;
//	vector<int> ans;
//	vector<int> tmp{ 1 };
//	for (int i = 1; i <= n; i++) {
//		tmp = mul(tmp, i);
//		ans = add(tmp, ans);
//	}
//
//	for (int i = ans.size() - 1; i >= 0; i--)printf("%d", ans[i]);
//	return 0;
//}




//#include "head.h"
//#include "TestClass.cpp"
//
//int main() {
//	{
//		//unique_ptr<MyString> smart_ptr{ new MyString("hello") };
//	}//开来没法模拟Java那种直接new的方式.
//	{
//		Print p(new MyString("world"));
//	}
//	return 0;
//}


/*#include "head.h"
#include "func.cpp"

int main() {
	vector<int> v{ 1,2,3,4 };
	Print<int>::println(v);

	Print p(new string("hello"));

	return 0;
}
*/


//#include<iostream>
//using namespace std;
//class MyString {
//private:
//	string m_str;
//public:
//	MyString(string str) :m_str(str) {
//		cout << "Constructed:" << m_str << endl;
//	}
//	~MyString() {
//		cout << "destructed:" << m_str << endl;
//	}
//	string show() {
//		return m_str;
//	}
//};
//
//int main() {
//	/*unique_ptr<MyString> smart_ptr1{ new MyString("A String") };
//	cout << smart_ptr1.get() << endl;
//
//	cout << endl;
//	
//	auto smart_ptr2{ move(smart_ptr1) };*/
//	//cout << smart_ptr1.get() << endl;
//	//cout << smart_ptr2.get() << endl;
//
//	//cout << endl;
//
//	//{
//	//	unique_ptr<MyString> temporary_smart_ptr({ new MyString("A temporary String") });
//	//}
//
//	//smart_ptr2.reset({ new MyString("A new String") });
//	////reset之后会把之前的指针释放掉
//
//	//auto str_p = smart_ptr2.release();
//	////传递指针释放sm2
//	//delete str_p;
//	unique_ptr<MyString> smart_ptr3{ new MyString("A String") };
//	unique_ptr<MyString> smart_ptr4{ new MyString("A Other String") };
//	swap(smart_ptr3, smart_ptr4);
//	cout << smart_ptr3.get()->show() << endl;
//	cout << smart_ptr4.get()->show() << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	for (int a = 123; a < 333; a++) {
//		int b = a * 2;
//		int c = a * 3;
//		if ((a / 100 + a / 10 % 10 + a % 10 + b / 100 + b / 10 % 10 + b % 10 + c / 100 + c / 10 % 10 + c % 10 == 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9) && ((a / 100) * (a / 10 % 10) * (a % 10) * (b / 100) * (b / 10 % 10) * (b % 10) * (c / 100) * (c / 10 % 10) * (c % 10) == (1) * (2) * (3) * (4) * (5) * (6) * (7) * (8) * (9)))
//			cout << a << " " << b << " " << c << endl;
//		//简易的判断两组数字是否相同，如果和相同并且积相同，那么就是同一组数字
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int n, L; cin >> L >> n;
//	int x = L / 2;
//	int MaxNum = 0, MinNum = 0;
//	while (n--) {
//		int number; cin >> number;
//		//MaxNum
//		if (number < x) {
//			//为什么求值都用max?因为需要等到最后一个士兵下来才可以，所以max
//			MaxNum = max(MaxNum, L - number+1);//到L+1才是结尾
//			MinNum = max(MinNum, number);
//		}
//		else {
//			MaxNum = max(MaxNum,number);
//			MinNum = max(MinNum, L - number+1);
//		}
//		//MinNum
//	}
//	cout << MinNum << " " << MaxNum << endl;
//	return 0;
//}






//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N = 15, M = 1010;
//int n, m;
//int f[M][N];
//char st[M][N];
//
//int check_distance(char a[], char b[]) {
//    int la = strlen(a + 1), lb = strlen(b + 1);
//    for (int i = 0; i <= lb; i++)f[0][i] = i;
//    for (int i = 0; i <= la; i++)f[i][0] = i;
//
//    for (int i = 1; i <= la; i++)
//        for (int j = 1; j <= lb; j++) {
//            f[i][j] = min(f[i][j - 1], f[i - 1][j]) + 1;
//            f[i][j] = min(f[i][j], f[i - 1][j - 1] + (a[i] != b[j]));
//        }
//    return f[la][lb];
//}
//
//
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)scanf("%d", st[i] + 1);
//
//    for (int i = 0; i < m; i++) {
//        char ch[N];
//        int limit, ans = 0;
//        scanf("%s%d", ch + 1, &limit);
//        for (int i = 0; i < n; i++)
//            if (check_distance(st[i], ch) <= limit)ans++;
//        printf("%d\n", ans);
//    }
//
//
//    return 0;
//}



//#include <initializer_list>
//#include <fmt/format.h>
//#include <iostream>
//
//void function(std::vector<int>list) {
//	for (auto& i : list) {
//		std::cout << fmt::format("function:{}", i) << std::endl;
//	}
//}
//
//int main() {
//	function({ 1,2,3,4,5 });
//
//	return 0;
//}



//#include <fmt/format.h>
//#include <stdarg.h>
//#include <iostream>
////可变参数
//void function(int count, ...) {
//	va_list parameters;
//	va_start(parameters, count);
//
//	for (int i = 0; i < count; i++) {
//		int parameter = va_arg(parameters, int);
//		std::cout << fmt::format("parameter:{}", parameter) << std::endl;
//	}
//	va_end(parameters);
//}
//
//int main() {
//	function(4, 2, 3, 4, 5);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//const int N = 1e4 + 10;
//int xx[N], yy[N], chang[N], kuan[N];
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> xx[i] >> yy[i] >> chang[i] >> kuan[i];
//	}
//	int x, y; cin >> x >> y;
//	for (int i = n - 1; i >= 0; i--) {
//		if (x >= xx[i] && y >= yy[i] && x <= xx[i] + chang[i] && y <= yy[i] + kuan[i]) {
//			cout << i + 1;
//			return 0;
//		}
//	}
//	cout << -1 << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int xma, yma, xb, yb;
//int arr[8][2]{ {-2,-1},{-2,1},{-1,-2},{-1,2},{1,2},{1,-2},{2,-1},{2,1} };
//const int N = 42;
//typedef long long LL;
//LL f[N][N];
//bool st[N][N];
//
//int main() {
//	cin >> xb >> yb >> xma >> yma;
//	//移位2，放置越界
//	xb += 2, yb += 2, xma += 2, yma += 2;
//
//	st[xma][yma] = true;
//	f[2][1] = 1;
//
//	for (int i = 0; i < 8; i++)
//		st[arr[i][0]+xma][arr[i][1]+yma] = true;//变成true
//
//	//一开始是0，加上2之后从2开始
//	for (int i = 2; i <= xb; i++) {
//		for (int j = 2; j <= yb; j++) {
//			if (st[i][j])continue;//他原本就是0，不用零
//			f[i][j] = f[i - 1][j] + f[i][j-1];
//		}
//	}
//	cout << f[xb][yb];
//	return 0;
//}




//#include <iostream>
//using namespace std;
//const int N = 100010;
//int a[N], q[N];
//int main() {
//    int n; scanf("%d", &n);
//    for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//
//    int len = 0;
//    q[0] = -2e9;
//    for (int i = 0; i < n; i++) {
//        int l = 0, r = len;
//        while (l < r) {
//            int mid = l + r + 1 >> 1;
//            if (a[mid] < a[i])l = mid;
//            else r = mid - 1;
//        }
//        len = max(len, r + 1);
//        q[r + 1] = a[i];
//    }
//    cout << len;
//    return 0;
//}



//#include <fmt/format.h>
//#include <iostream>
//using namespace std;
//using namespace fmt;
//int main()
//{
//	std::cout << fmt::format("this {} a {} example\n", "is", "simple");
//	std::cout << fmt::format("this {0} a {1} example\n", "is", "simple");
//	std::cout << fmt::format("this {1} a {0} example\n", "simple", "is");
//}



//#include <iostream>
//#include <algorithm>
//#include <vector>
//namespace my {
//	typedef std::pair<int, int> PII;
//}
//using namespace std;
//int main() {
//	vector<pair<int, int>> v;
//	for (int i = 1; i < 10; i++)
//		v.push_back({ i,2 });
//	/*sort(v.begin(), v.end(), [&](decltype(*v.begin()) x, decltype(*v.begin()) y) -> bool {
//		return x.second > y.second;
//		});*/
//	sort(v.begin(), v.end(), [&](my::PII x, my::PII y) -> bool {
//		return x.second > y.second;
//		});
//
//	for (auto& i : v) {
//		cout << i.first << " " << i.second << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <map>
//using namespace std;
//int main() {
//	int n; scanf("%d", &n);
//	map<int, int> primes;
//	for (int k = 2; k <= n; k++) {
//		int a = k;
//		for (int i = 2; i <= k; i++)
//			while (a % i == 0)
//			{
//				primes[i]++;
//				a = a / i;
//			}
//		if (a > 1)primes[a]++;
//	}
//	for (auto& prime : primes) {
//		int p = prime.first, a = prime.second;
//		printf("%d %d\n",p,a);
//	}
//	return 0;
//}



//#include <iostream>
//#include <unordered_map>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	unordered_map<int, int> primes;
//	for (int k = 2; k <= n; k++) {
//		int a = k;
//		for (int i = 2; i <= a / i; i++)
//			while (a % i == 0)
//			{
//				primes[i]++;
//				a /= i;
//			}
//		if (a > 1)primes[a]++;
//	}
//	for (auto& prime : primes) {
//		int p = prime.first, a = prime.second;
//		cout << p << " " << a << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int k, m, n;
//int main() {
//	vector<int> ans;
//	cin >> k >> m >> n;
//	bool flag = false;
//	for (int i = 1; i <= m; i++) {
//		int fali = k, boss = n;
//		int a, b; cin >> a >> b;
//		if (b == 0) continue;
//		{
//			int x = boss / b;
//			fali -= x * a;
//			boss -= x * b;
//		}
//		if (boss > 0)fali -= a;
//		if (fali >= 0) {
//			ans.push_back(i);
//			flag = true;
//		}
//	}
//	if (!flag)cout << -1;
//	else
//		for (auto i : ans)
//			cout << i << " ";
//	return 0;
//}



//#include <iostream>
//using namespace std;
//const int N = 510;
//int n;
//int f[N][N], w[N][N];
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            cin >> w[i][j];
//
//    for (int i = 1; i <= n; i++)f[n][i] = w[n][i];
//    for (int i = n - 1; i; i--)
//        for (int j = 1; j <= i; j++)
//            f[i][j] = max(f[i + 1][j] + w[i][j], f[i + 1][j + 1] + w[i][j]);
//
//    cout << f[1][1] << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int test() {
//	int a, b; cin >> a >> b;
//	if (b == 0)
//		throw "除0错误";
//	return a / b;
//}
//int main() {
//	try {
//		cout << test() << endl;
//	}
//	catch (const char* a) {
//		cout << a << endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int n, number; cin >> n >> number;
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		int x = i;
//		while (x) {
//			if (x % 10 == number)ans++;
//			x /= 10;
//		}
//	}
//	cout << ans;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	long long n; cin >> n;
//	for (int i = 1; i <= n / i; i++)
//		cout << i * i << " ";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	double hp = 10;
//	int ans1 = 0, ans2 = 0;
//	while (n--) {
//		double x, jingyan; cin >> x >> jingyan;
//		hp -= x;
//		if (hp > 10)hp = 10;
//		if (hp <= 0)break;
//		for (int i = 1; i <= jingyan; i *= 2) {
//			ans1++;
//			jingyan -= i;
//		}
//		ans2 = jingyan;
//		hp -= x;
//	}
//	cout << ans1 << " " << ans2;
//	return 0;
//}


//#include <iostream>
//#include <unordered_map>
//typedef long long LL;
//using namespace std;
//int func(int n) {
//	unordered_map<int, int> primes;
//	for (int i = 2; i <= n / i; i++) {
//		while (n % i == 0) {
//			primes[i] ++;
//			n /= i;
//		}
//	}
//	if (n > 1)primes[n]++;
//	LL ans = 1;
//	for (auto prime : primes) {
//		int p = prime.first, a = prime.second;
//		LL t = 1;
//		while (a--)t = (LL)(t * p + 1);
//		ans *= t;
//	}
//	return ans;
//}
//int main() {
//	int n; cin >> n;
//	while (true) {
//		int x = func(n);
//		if (func(x) == n) {
//			cout << n << " " << x;
//			break;
//		}
//		n++;
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 3;
//int arr[N * N];
//int main() {
//	string a; cin >> a;
//	for (auto i : a) {
//		if ((i - '0') % 2) arr[i] = 1;
//		else arr[i] = 0;
//	}
//	for (int i = 0; i < 3; i++)
//		for (int j = i * N; j < i * N + 3; j++) {
//			if(arr[i][j])
//		}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 110;
//int n, m, x, y;
//int arr[N][N];
//int last[N][N];
//int main() {
//	scanf("%d%d%d%d", &n, &m, &x, &y);
//	int lun = 1;
//	while (x--) {
//		int x1, y1, x2, y2;
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		for (int i = x1; i <= x2; i++) 
//			for (int j = y1; j <= y2; j++) {
//				arr[i][j]++;
//				last[i][j] = lun;
//			}
//		lun++;
//	}
//	while (y--) {
//		int x, y;
//		scanf("%d%d", &x, &y);
//		if (arr[x][y])
//			printf("Y %d %d\n", arr[x][y], last[x][y]);
//		else
//			puts("N");
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 110;
//int n, m, k;
//int huoba[N][2];
//int yingshi[N][2];
//int arr[N][N];
//bool func1(int i, int j) {
//	if (arr[i][j] == -1)return false;
//
//}
//bool func2(int i, int j) {
//	if (arr[i][j] == -1)return false;
//}
//int main() {
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++) 
//		scanf("%d%d", &huoba[i][0], &huoba[i][1]);
//	for (int i = 0; i < m; i++)
//		scanf("%d%d", &yingshi[i][0], &yingshi[i][1]);
//	int ans = 0;
//	for(int i = 0;i < n;i++)
//		for (int j = 0; j < n; j++)
//			if (!func1(i, j) && !func2(i, j))ans++;
//	return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 210;
//string str;
//int main() {
//	getline(cin, str);
//	int ans = 0;
//	for (auto i : str) {
//		if (i == 'z' || i == 's')ans += 4;
//		else if (i == ' ')ans++;
//		else if (i == 't' || i == 'w')ans++;
//		else if (i == 'u' || i == 'x')ans += 2;
//		else if (i == 'v' || i == 'y')ans += 3;
//		else if('a' <= i && i <= 'r') {
//			int tmp = i - 'a';
//			tmp %= 3;
//			ans += tmp + 1;
//		}
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//#include <deque>
//using namespace std;
//int main() {
//	string str; cin >> str;
//	deque<char> stack;
//
//	for (auto i : str) {
//		if (i == '(')
//			stack.push_back(i);
//		if (i == ')') {
//			if (stack.empty()) {
//				cout << "NO";
//				return 0;
//			}
//			stack.pop_back();
//		}
//	}
//	if (stack.empty())cout << "YES";
//	else cout << "NO";
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//double func(int n) {
//	double x1 = pow((1 + sqrt(5)) / 2, n);
//	double x2 = pow((1 - sqrt(5)) / 2, n);
//	double y1 = sqrt(5);
//	return (x1 - x2) / y1;
//}
//int main() {
//	int n; cin >> n;
//	cout << fixed << setprecision(2) << func(n);
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 5010;
//int primes[N],sum[N],cnt;
//bool st[N];
//
//void get_primes(int n){
//    for(int i = 2;i <= n ; i ++){
//        if(!st[i])primes[cnt ++] = i;
//        for(int j = 0;primes[j] <= n / i;j ++){
//            st[primes[j] * i] = true;
//            if(i % primes[j] == 0)break;
//        }
//    }
//}
//int get(int n,int p){
//    int res = 0;
//    while(n){
//        res +=n / p;
//        n /= p;
//    }
//    return res;
//}
//
//vector<int> mul(vector<int> v,int p){
//    vector<int> res;
//    int t = 0;
//    for(int i = 0;i < v.size();i ++){
//        t += v[i] * p;
//        v.push_back(t % 10);
//        t /= 10;
//    }
//    while(t){
//        v.push_back(t % 10);
//        t /= 10;
//    }
//    return res;
//}
//
//int main(){
//    int a,b;scanf("%d%d",&a,&b);
//    get_primes(a);
//    
//    for(int i = 0;i < cnt;i++){
//        int p = primes[i];
//        sum[i] = get(a,p) - get(b,p) - get(a-b,p);
//    }
//    
//    vector<int> res;
//    res.push_back(1);
//    
//    for(int i = 0;i < cnt;i++)
//        for(int j = 0;j < sum[i];j ++)
//            res = mul(res,primes[i]);
//    
//    for(int i = res.size()-1;i >= 0; i --)printf("%d",res[i]);
//    puts("");
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int n, d, number,ans;
//bool flag;
//int main() {
//	cin >> n;
//	
//	while (n--) {
//		cin >> flag;
//		if (flag) {
//			if(number > 0)d -= pow(2, number - 1);
//			if (d < 0)d = 0;
//			d++, number = 0, ans++;
//			if (d >= 3)ans++;
//			if (d >= 7) ans++;                   
//			if (d >= 30) ans++;                 
//			if (d >= 120) ans++;               
//			if (d >= 365) ans++;
//		}
//		else number++;
//	}
//
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int x[N], y[N], r[N];
//int dist(int x, int y, int xx, int yy) {
//	return sqrt((x - xx) * (x - xx) + (y - yy) * (y - yy));
//}
//int main() {
//	int n; cin >> n;
//
//	for (int i = 0; i < n; i++)cin >> x[i];
//	for (int i = 0; i < n; i++)cin >> y[i];
//	for (int i = 0; i < n; i++)cin >> r[i];
//
//	int x1, y1, x2, y2, res = 0;;
//	cin >> x1 >> y1 >> x2 >> y2;
//	for (int i = 0; i < n; i++) {
//		if (dist(x1, y1, x[i], y[i]) < r[i] ^ dist(x2, y2, x[i], y[i]) < r[i])res++;
//
//	}
//	cout << res;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//typedef long long LL;
//int p;
//
//int qmi(int a, int k) {
//    LL res = 1;
//    while (k) {
//        if (k & 1)res = (LL)res * a % p;
//        k >>= 1;
//        a = (LL)a * a % p;
//    }
//    return res;
//}
//
//int C(int a, int b) {
//    LL res = 1;
//    for (int i = 1, j = b; i <= a; i++, j--) {
//        res = (LL)res * j % p;
//        res = (LL)res * qmi(i, p - 2) % p;
//    }
//    return res;
//}
//
//int lucas(LL a, LL b) {
//    if (a < p && b < p)return C(a, b);
//    else return C(a % p, b % p) * lucas(a / p, b / p)% p;
//}
//
//int main() {
//    int n; cin >> n;
//    while (n--) {
//        int a, b;
//        cin >> a >> b >> p;
//        cout << lucas(a, b) << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <string>
//#include <vector>
//#include <boost/algorithm/string/classification.hpp>
//#include <boost/algorithm/string/split.hpp>
//using namespace std;
//
//int main()
//{
//    string s = "sss/ddd,ggg";
//    vector<string> vStr;
//    boost::split(vStr, s, boost::is_any_of(",/"), boost::token_compress_on);
//    for (vector<string>::iterator it = vStr.begin(); it != vStr.end(); ++it)
//    {
//        cout << *it << endl;
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//typedef long long LL;
//int main() {
//	int n, x; cin >> x >> n;
//	LL all = 1, people = 0;
//	while (n--) {
//		all += all * x;
//	}
//	cout << all;
//	return 0;
//}



//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//int number;
//LL all;
//vector<int> func(char* s,const char* split) {
//	vector<int> v;
//	char* p1; p1 = strtok(s, split);
//	while (p1 != nullptr ) {
//		string tmp1(p1);
//		int p1Int = atoi(tmp1.c_str());
//		v.push_back(p1Int);
//		p1 = strtok(NULL, ":");
//	}
//	return v;
//}
//int main() {
//	char zhuBaJie[10]; cin >> zhuBaJie;
//	char sunWuKong[10]; cin >> sunWuKong;
//	cin >> number;
//	auto v1 = func(zhuBaJie, ":");
//	auto v2 = func(sunWuKong, ":");
//
//	int size = min(v1.size(), v2.size());
//
//	for (int i = 0; i < size; i++){
//		int n = v2[i] - v1[i];
//
//		all += i == 0 ? n * 60 * 60 : i == 1 ? n * 60 : n;
//	}
//	cout << all * number;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 2010, mod = 1e9 + 10;
//int c[N][N];
//int n;
//void init() {
//    for (int i = 1; i <= n; i++)
//        for (int j = 0; j <= i; j++)
//            if (j == 0)c[i][j] = 1;
//            else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
//}
//
//int main() {
//    cin >> n;
//    init();
//    while (n--) {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        printf("%d\n", c[a][b]);
//    }
//    return 0;
//}


//#include<iostream>
//#include<deque>
//using namespace std;
//int main() {
//	int n, m; cin >> n >> m;
//	if (n == 0) {
//		cout << 0;
//		return 0;
//	}
//	deque<int> q;
//	int ans = 0x3f3f3f3f;
//	while (n--) {
//		int number; cin >> number;
//		q.push_back(number);
//		if (q.size() != m)continue;
//		int tmp = 0;
//		for (auto i : q)
//			tmp += i;
//		ans = min(tmp, ans);
//		q.pop_front();
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//string str;
//char arr[5];
//int a, b, c, idx;
//int main() {
//	cin >> str;
//	int size = str.size();
//	while (idx != size) {
//		for (int i = 0; i < 5; i++) {
//			arr[i] = str[idx + i];
//		}
//		idx += 5;
//		int& res = arr[0] == 'a' ? a : arr[0] == 'b' ? b : c;
//		if (isalpha(arr[3])) {
//			res = arr[3] == 'a' ? a : arr[3] == 'b' ? b : c;
//		}
//		else {
//			res = arr[3] - '0';
//		}
//	}
//	cout << a << " " << b << " " << c;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int arr[N];
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	int ans = 0;
//	int i = 1, j = 0;
//	while (j < n) {
//		while (i < n && arr[i - 1] < arr[i])i++;
//		ans = max(ans, i - j);
//		j = i++;
//	}
//	cout << ans;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//    int n; cin >> n;
//    while (n--) {
//        int a; cin >> a;
//        int res = a;
//        for (int i = 2; i <= a / i; i++)
//            if (a % i == 0) {
//                res = res / i * (i - 1);
//                while (a % i == 0)a /= i;
//            }
//        if (a > 1)res = res / a * (a - 1);
//        cout << res << endl;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int arr[10];
//int main() {
//	int m, n; cin >> m >> n;
//	for (int i = m; i <= n; i++) {
//		int z = i;
//		while (z) {
//			int number = z % 10;
//			arr[number] ++;
//			z /= 10;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//		cout << arr[i] << " ";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	int ans = 0;
//	int jian = 0;
//	while (n--) {
//		int a1, a2; cin >> a1 >> a2;
//		jian += a1 + a2 - 8;
//		ans += jian;
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int x1, yy1, x2, y2;
//char c1, c2;
//int gcd(int a, int b) {
//	return b ? gcd(b, a % b) : a;
//}
//int main() {
//	cin >> x1 >> c1 >> yy1
//		>> x2 >> c2 >> y2;
//	int ans1 = x1 / gcd(x1, y2);
//	int ans2 = y2 / gcd(x1, y2);
//	int ans3 = x2 / gcd(x2, yy1);
//	int ans4 = yy1 / gcd(x2, yy1);
//	cout << ans2 * ans4 << " " << ans1 * ans3;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 110;
//int arr[N], s[N];
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	for (int i = n - 1; i > 0; i--) {
//		for (int j = i - 1; j >= 0; j--) {
//			if (arr[j] < arr[i])s[i] ++;
//		}
//	}
//	for (int i = 0; i < n; i++)cout << s[i] << " ";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	double n = 7, all = 0;
//	double s, x; cin >> s >> x;
//	while (all < s - x) {
//		all += n;
//		n *= 0.98;
//	}
//	if (all + n > s + x)cout << "n";
//	else cout << "y";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int now, days; cin >> now >> days;
//	int ans = 0;
//	while (days--) {
//		if (1 <= now && now <= 5) ans += 250;
//		now = (now + 1) % 7;
//	}
//	cout << ans;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	long double n; cin >> n;
//	int ans = 0;
//	long double now = 2.0, all = 0.0;
//	while (all < n) {
//		all += now;
//		now *= 0.98;
//		ans++;
//	}
//	cout << ans;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//double less150(int n) {
//	return n * 0.4463;
//}
//double more400(int n) {
//	return n * 0.5663;
//}
//double mid(int n) {
//	return n * 0.4663;
//}
//int main() {
//	int n; cin >> n;
//	double b = 0;
//	if (n <= 150) {
//		b = less150(n);
//	}
//	else if (n <= 400) {
//		b = less150(150) + mid(n - 150);
//	}
//	else {
//		b = less150(150) + mid(400 - 150) + more400(n - 400);
//	}
//	b = int(b * 10 + 0.5) / 10.0;
//	cout << b;
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 200;
//char arr[N * N + 10];
//int idx;
//int main() {
//	char str[N]; scanf("%s", str);
//	auto n = strlen(str);
//	strcat(arr, str);
//	int number = n - 1;
//	while (number--) {
//		scanf("%s", str);
//		strcat(arr, str);
//	}
//
//	cout << n << ' ';
//	for (int i = 0, sum = 0, num = '0'; i <= strlen(arr); i++)//从text[i]开始循环
//		if (num == arr[i])//判断这个字符是否与上一个字符相等（第一个字符与‘0’做判断）
//			sum++;//如果相等，sum加一
//		else
//		{
//			num = arr[i];
//			printf("%d ", sum);//反之，输出sum值（带空格），并初始化num与text
//			sum = 1;
//		}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	char flag;
//	int a;
//	for (int i = 1,j = 0; cin>>a ; i++) {
//		if (i & 1)flag = '0';
//		else flag = '1';
//		while (a--) {
//			j++;
//			if (j > n) {
//				cout << endl;
//				j = 1;
//			}
//			cout << flag;
//		}
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//	int n,l = -1,r; cin >> n;
//	bool flag = false;
//	int res = 0;
//	while (n--) {
//		cin >> r;
//		if (l > r)flag = true;
//		if (l < r && flag) {
//			res++;
//			flag = false;
//		}
//		l = r;
//	}
//	cout << res;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	string a; cin >> a;
//	bool flag = false;
//	if (a[0] == '-')cout << "-";
//	int number = a.size();
//	for (int i = a.size() - 1; i > 0; i--) {
//		if (i == number - 1 && a[i] == '0') {
//			number--;
//			continue;
//		}
//		cout << a[i];
//		flag = true;
//	}
//	if (a[0] != '-')cout << a[0];
//	
//	return 0;
//}


//#include <iostream>
//#include <unordered_map>
//typedef long long LL;
//using namespace std;
//const int mod = 1e9 + 7;
//int main() {
//    unordered_map<int, int> primes;
//    int n; cin >> n;
//    while (n--) {
//        int a; scanf("%d", &a);
//        for (int i = 2; i <= a / i; i++) {
//            while (a % i == 0) {
//                primes[i]++;
//                a /= i;
//            }
//        }
//        if (a > 1)primes[a] ++;
//    }
//    LL res = 1;
//    for (auto& i : primes)res = (res * (i.second + 1)) % mod;
//    cout << res << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//bool is_prime(int n) {
//	if (n < 2)return false;
//	for (int i = 2; i <= n / i; i++) {
//		if (n % i == 0)return false;
//	}
//	return true;
//}
//
//int main() {
//	int n; cin >> n;
//	for (int i = 4; i <= n; i += 2) {
//		for (int j = 2; j <= i; j++) {
//			if (is_prime(j) && is_prime(i - j)) {
//				cout << i << "=" << j << "+" << i - j << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}



//#include <iostream>
//#include <unordered_set>
//using namespace std;
//const int N = 1e8 + 10;
//
//unordered_set<int> sett;
//
//int primes[N], cnt;
//bool st[N];
//void func(int n) {
//	for (int i = 2; i <= n; i++) {
//		if (!st[i]) {
//			primes[cnt++] = i;
//			sett.insert(i);
//		}
//		for (int j = 0; primes[j] <= n / i; j++) {
//			st[primes[j] * i] = true;
//			if (i % primes[j] == 0)break;
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	func(n);
//	for (int i = 4; i <= n; i += 2) {
//		for (int j = 2; j <= i; j++) {
//			if (sett.count(j) && sett.count(i - j)) {
//				cout << i << "=" << j << "+" << i - j << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int func(string str) {
//	int ans = 1;
//	for (auto i : str) {
//		ans = ans * (i - 'A' + 1) % 47;
//	}
//	return ans;
//}
//int main() {
//	string a, b;
//	cin >> a >> b;
//	if (func(a) == func(b))cout << "GO" << endl;
//	else cout << "STAY" << endl;
//	return 0;
//}


//#include <iostream>
//#include <stack>
//using namespace std;
//int main() {
//	stack<int> stk;
//	int a;
//	while (cin >> a) {
//		if (a == 0)break;
//		stk.push(a);
//	}
//	while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b; cin >> a >> b;
//	float sca = a + float(b) / 10;
//	cout << int(sca / 1.9) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 2000000 + 10;
//int arr[N];
//int main() {
//	int n; cin >> n;
//	while (n--) {
//		float a, t; cin >> a >> t;
//		for (double i = 1; i <= t; i++) {
//			int idx = i * a;
//			if (arr[idx] == 0)arr[idx] = 1;
//			else arr[idx] = 0;
//		}
//	}
//	for (int i = 1;; i ++ )
//		if (arr[i] == 1) {
//			cout << i << endl;
//			break;
//		}
//		
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int ans = 0;
//	int L, R; cin >> L >> R;
//	for (int i = L; i != R + 1; i++) {
//		int number = i;
//		while (number) {
//			if (number % 10 == 2)ans++;
//			number /= 10;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}


//#include <iostream>
//#include <unordered_map>
//using namespace std;
//const int mod = 1e9 + 7;
//int n;
//typedef long long LL;
//int main() {
//    cin >> n;
//    unordered_map<int, int> primes;
//    while (n--) {
//        int a; cin >> a;
//        for (int i = 2; a <= n / i; i++) {
//            while (a % i == 0) {
//                primes[i] ++;
//                a /= i;
//            }
//        }
//        if (a > 1)primes[a] ++;
//    }
//    int res = 1;
//    for (auto& i : primes) {
//        auto p = i.first, a = i.second;
//        LL t = 1;
//        while (a--)t = (t * p + 1) % mod;
//        res = res * t % mod;
//    }
//    cout << res;
//    return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//const int N = 1e3 + 10;
//int arr[N];
//int main() {
//	unordered_map<int, bool> hash;
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 1; i < n; i++) {
//		int number = abs(arr[i] - arr[i - 1]);
//		hash[number] ++;
//	}
//	bool flag = true;
//	for (int i = 1; i < n; i++) {
//		if (!hash.count(i))
//			flag = false;
//	}
//	if (!flag)cout << "Not jolly";
//	else cout << "Jolly";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int k; cin >> k;
//	bool flag = false;
//	for (int i = 10000; i <= 30000; i++) {
//		int number = i;
//		int first = number / 100;
//		int second = (number % 10000) / 10;
//		int third = (number % 1000);
//		if (first % k == 0 && second % k == 0 && third % k == 0) {
//			cout << number << endl;
//			flag = true;
//		}
//	}
//	if (!flag)cout << "No";
//	return 0;
//}



//#include <iostream>
//#include <unordered_map>
//using namespace std;
//const int mod = 1e9 + 7;
//int n;
//int main() {
//    scanf_s("%d", &n);
//    unordered_map<int, int> primes;
//    while (n--) {
//        int a; scanf_s("%d", &a);
//        for (int i = 2; i <= a / i; i++)
//            while (a % i == 0) {
//                primes[i]++;
//                a /= i;
//            }
//        if (a > 1)primes[a]++;
//    }
//    int res = 1;
//    for (auto &i : primes)res = res * (i.second + 1);
//    res %= mod;
//    cout << res;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int yandi, k; cin >> yandi >> k;
//	int yigong = yandi;
//	while (yandi >= k) {
//		yigong += yandi / k;
//		yandi = yandi % k + yandi / k;
//	}
//	cout << yigong << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 100;
//int arr[N];
//int main() {
//	int n; cin >> n;
//	cout << n << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i != j) {
//				if (arr[j])arr[j] = 0;
//				else arr[j] = 1;
//			}
//			cout << arr[j];
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n, cnt;
//int primes[N];
//bool st[N];
//void f() {
//    for (int i = 2; i < n; i++) {
//        if (!st[i])primes[cnt++] = i;
//
//        for (int j = 0; primes[j] <= n / i; j++) {
//
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//int main() {
//    scanf("%d", &n);
//    f();
//    cout << cnt << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int n;
//void dividede(int a) {
//    for (int i = 2; i <= n / i; i++)
//        if (n % i == 0) {
//            int s = 0;
//            while (n % i == 0) {
//                s++;
//                n /= i;
//            }
//            printf("%d %d\n", i, s);
//        }
//    if (n > 1)printf("%d %d\n", n, 1);
//}
//int main() {
//    scanf_s("%d", &n);
//    while (n--) {
//        int a;
//        scanf_s("%d", &a);
//        dividede(a);
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 110;
//int arr[N];
//int n;
//int main() {
//	cin >> n; cout << n << endl;;
//	int tmp = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (tmp == ) {
//				cout << arr[i];
//			}
//			cout << !arr[i];
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e4 + 10;
//int arr[N];
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int res = 0;
//	for (int i = 0; i < n; i++) {
//		bool flag = false;
//		for (int j = i; j < n; j++) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//				res++;
//				flag = true;
//			}
//		}
//		if (!flag)break;
//	}
//	printf("%d", res);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int cunqian = 0;
//	bool flag = false;
//	int shengyu = 0;
//
//	for (int i = 1; i <= 12; i++) {
//		int yusuan; cin >> yusuan;
//		shengyu = shengyu + 300 - yusuan;
//		if (shengyu < 0) {
//			cout << -i << endl;
//			flag = true;
//			break;
//		}
//		while (shengyu / 100) {
//			cunqian += shengyu / 100;
//			shengyu %= 100;
//		}
//	}
//	if (!flag) {
//		cout << shengyu + cunqian * 120 << endl;
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//	pair<int,int> res = {0,0};
//	for (int i = 1; i <= 7; i++) {
//		int a, b;
//		cin >> a >> b;
//		pair<int, int> tmp{ a + b,i };
//		if (tmp.first > 8)
//			res = tmp.first > res.first ? tmp : res;
//	}
//	cout << res.second;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int func(int n) {
//	for (int i = 2; i <= n / i; i++)
//		if (n % i == 0)
//			return n / i;
//}
//int main() {
//	int a; cin >> a;
//	cout << func(a);
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 510, M = 1e5 + 10;
//int h[N], e[M], ne[M], idx;
//int match[M];
//bool st[M];
//int n1, n2, m;
//
//void add(int a, int b) {
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//bool find(int x) {
//    for (int i = h[x]; i != -1; i = ne[i]) {
//        int j = e[i];
//        if (!st[j]) {
//            st[j] = true;
//            if (match[j] == 0 || find(match[j])) {
//                match[j] = x;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int main() {
//    scanf("%d%d%d", &n1, &n2, &m);
//    while (m--) {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        add(a, b);
//    }
//    int res = 0;
//    for (int i = 1; i <= n1; i++) {
//        memset(st, false, sizeof st);
//        if (find(i))res++;
//    }
//    printf("%d\n", res);
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std; 
//const int n = 20;
//bool used[n][n];
//vector<vector<int>> arv;
//
//
//int x1, x2, yy1, y2;
//int ans;
//int arr[8][2]{ {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1} };
//int arr1[4][2]{ {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//
//void dfs(int x, int y)
//{
//    for (int i = 0; i < arv.size(); i++)
//    {
//        if (x == arv[i][0] && y == arv[i][1])
//            return;
//    }
//    if (x == x2 && y == y2)
//    {
//        ans++;
//        return;
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        int xx = x + arr1[i][0], yy = y + arr1[i][1];
//        if (xx >= 0 && yy >= 0 && xx <= n && yy <= n)
//        {
//            if (!used[xx][yy]) {
//                used[xx][yy] = true;
//                dfs(xx, yy);
//                used[xx][yy] = false;
//
//            }
//            
//        }
//    }
//}
//int main()
//{
//    scanf_s("%d%d%d%d", &x1, &yy1, &x2, &y2);
//    for (auto& i : arr)
//    {
//        int x = i[0] + x2;
//        int y = i[1] + y2;
//        if (x >= 0 && x <= n && y >= 0 && y <= n)
//            arv.push_back({ x, y });
//    }
//    dfs(0, 0);
//    printf("%d\n", ans);
//    return 0;
//}




//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1e4 + 10;
//int arr[N];
//int n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i <= n; i++)
//		arr[i] = 1;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		for (int i = a; i <= b; i++)
//			if (arr[i] == 1)
//				arr[i] = 0;
//	}
//	int ans = 0;
//	for (int i = 0; i <= n; i++)
//		if (arr[i] == 1)
//			ans++;
//	cout << ans;
//
//	return 0;
//}




//#include <iostream>
//using namespace std;
//int main() {
//	int n = 0;
//	double res = 0;
//	int k; cin >> k;
//	while (res <= k) {
//		n++;
//		res += 1.0 / n;
//	}
//	cout << n << endl;
//	return 0;
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1e5 + 10, M = 2e5 + 10;
//int h[N], e[M], ne[M], idx;
//int collor[N];
//int n, m;
//
//void add(int a, int b) {
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool dfs(int u, int c) {
//    collor[u] = c;
//    for (int i = h[u]; i != -1; i = ne[i]) {
//        int j = e[i];
//
//        if (!collor[j]) {
//            if (!dfs(j, 3 - c))return false;
//        }
//        else if (collor[j] == c)return false;
//    }
//    return true;
//}
//
//
//int main() {
//    scanf_s("%d%d", &n, &m);
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        scanf_s("%d%d", &a, &b);
//        add(a, b), add(b, a);
//    }
//    bool flag = true;
//    for (int i = 1; i <= n; i++) {
//        if (!collor[i]) {
//            if (!dfs(i, 1)) {
//                flag = false;
//                break;
//            }
//        }
//    }
//    if (flag)puts("Yes");
//    else puts("No");
//    return 0;
//}




//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10, M = 2e5 + 10;
//
//struct Edge {
//    int a, b, w;
//    bool operator< (const Edge& W)const {
//        return w < W.w;
//    }
//}edges[M];
//
//int p[N];
//int n, m;
//int find(int x) {
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)p[i] = i;
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        edges[i] = { a,b,c };
//    }
//    sort(edges, edges + m);
//
//    int res = 0, cnt = 0;
//    for (int i = 0; i < m; i++) {
//
//        auto t = edges[i];
//        int a = t.a, b = t.b, w = t.w;
//        if (find(a) != find(b)) {
//            res += w;
//            cnt++;
//            p[a] = find(b);
//        }
//    }
//    if (cnt == n - 1)printf("%d\n", res);
//    else puts("impossible");
//
//    return 0;
//}



//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	int number = 1;
//	while (n - number > 0) {
//		n = n - number;
//		number++;
//	}
//	cout << n << "/" << number << endl;
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 510, INF = 1e9;
//int g[N][N], dist[N];
//bool st[N];
//int n, m;
//
//int Prim() {
//    int res = 0;
//    memset(dist, 0x3f, sizeof dist);
//    for (int i = 0; i < n; i++) {
//        int t = -1;
//        for (int j = 1; j <= n; j++)
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        if (i && dist[t] == INF)return INF;
//
//        if (i)res += dist[t];
//
//        st[t] = true;
//
//        for (int j = 1; j <= n; j++)
//            dist[j] = min(dist[j], g[t][j]);
//    }
//    return res;
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    memset(g, 0x3f, sizeof g);
//
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        g[a][b] = g[b][a] = c;
//    }
//
//    int t = Prim();
//    if (t == INF)puts("impossible");
//    else printf("%d\n", t);
//    return 0;
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 210, INF = 1e9;
//int n, m, Q;
//int d[N][N];
//
//void foldy() {
//    for (int k = 1; k <= n; k++)
//        for (int i = 1; i <= n; i++)
//            for (int j = 1; j <= n; j++)
//                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//}
//
//int main() {
//    scanf("%d%d%d", &n, &m, &Q);
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            if (i == j) d[i][j] = 0;
//            else d[i][j] = INF;
//
//    for (int i = 1; i < m; i++) {
//        int a, b, w;
//        scanf("%d%d%d", &a, &b, &w);
//        d[a][b] = min(d[a][b], w);
//    }
//
//    foldy();
//
//    for (int i = 0; i < Q; i++) {
//        int a, b;
//        if (d[a][b] > INF / 2)puts("impossible");
//        else printf("%d\n", d[a][b]);
//    }
//    return 0;
//}




//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int N = 2e3 + 10, M = 1e4 + 10;
//int h[N], e[M], ne[M], w[M], idx;
//int dist[N], cnt[N];
//bool st[N];
//int n, m;
//
//void add(int a, int b, int c) {
//    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool spfa() {
//    queue<int> q;
//    for (int i = 1; i <= n; i++) {
//        st[i] = true;
//        q.push(i);
//    }
//
//    while (!q.empty()) {
//        auto t = q.front(); q.pop();
//        st[t] = false;
//        for (int i = h[t]; i != -1; i = ne[i]) {
//            int j = e[i];
//            if (dist[j] > dist[t] + w[i]) {
//                dist[j] = dist[t] + w[i];
//
//                cnt[j] = cnt[t] + 1;
//                if (cnt[j] >= n)return true;
//
//                if (!st[j]) {
//                    st[j] = true;
//                    q.push(j);
//                }
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    memset(h, -1, sizeof h);
//    while (m--) {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        add(a, b, c);
//    }
//    if (spfa())puts("Yes");
//    else puts("No");
//
//    return 0;
//}


//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int N = 1e5 + 10;
//int h[N], e[N], ne[N], w[N], idx;
//int dist[N];
//bool st[N];
//int n, m;
//void add(int a, int b, int c) {
//    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//int spfa() {
//    queue<int> q;
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//    q.push(1);
//    st[1] = true;
//
//    while (!q.empty()) {
//        auto t = q.front(); q.pop();
//        st[t] = false;
//        for (int i = h[t]; i != -1; i = ne[i]) {
//            int j = e[i];
//            if (dist[j] > dist[t] + w[i]) {
//                dist[j] = dist[t] + w[i];
//                if (!st[j]) {
//                    st[j] = true;
//                    q.push(j);
//                }
//            }
//        }
//    }
//    if (dist[n] == 0x3f3f3f3f)return -1;
//    else return dist[n];
//}
//int main() {
//    scanf("%d%d", &n, &m);
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        add(a, b, c);
//    }
//    int t = spfa();
//    if (t == -1)puts("impossible");
//    else printf("%d\n", t);
//    return 0;
//}











//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N = 510, M = 1e4 + 10;
//int dist[N], backup[N];
//int n, m, k;
//struct Edges {
//    int a, b, w;
//}edge[M];
//
//int bellman_ford() {
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//
//    for (int i = 0; i < k; i++) {
//        memcpy(backup, dist, sizeof dist);
//
//        for (int j = 0; j < m; j++) {
//
//            int a = edge[j].a, b = edge[j].b, w = edge[j].w;
//
//            dist[b] = min(dist[b], backup[a] + w);
//        }
//    }
//
//    if (dist[n] > 0x3f3f3f3f / 2)return -1;
//    else return dist[n];
//}
//
//int main() {
//    scanf("%d%d%d", &n, &m, &k);
//
//    for (int i = 0; i < m; i++) {
//        int a, b, w;
//        scanf("%d%d%d", &a, &b, &w);
//        edge[i] = { a,b,w };
//    }
//
//    int t = bellman_ford();
//    if (t == -1)puts("impossible");
//    else printf("%d\n", dist[n]);
//    return 0;
//}