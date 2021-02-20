//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//bool cmp(vector<int> a, vector<int> b) {
//	return a[0] > b[0];
//}
//
//int main(void) {
//	int n;
//	vector<vector<int>> A(101, vector<int>(2, 0));
//	int rem[101] = {0};
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> A[i][0];
//		cin >> A[i][1];
//	}
//
//	sort(A.begin()+1, A.end(), cmp);
//
//	int max;
//	for (int i = n; i >= 1; i--) {
//		max = 0;
//		for (int j = n; j > i; j--) {
//			if (A[j][1] < A[i][1]) {
//				if (rem[j] > max) {
//					max = rem[j];
//				}
//			}
//		}
//		rem[i] = max + 1;
//	}
//
//	max = 0;
//	for (int i = 1; i <= n; i++) {
//		if (max < rem[i])
//			max = rem[i];
//	}
//
//	cout << n - max;
//}