//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int remember[41];
//
//int fib(int n) {
//	if (n == 0) {
//		return 0;
//	}
//
//	if (n == 1) {
//		return 1;
//	}
//		
//	if (remember[n]) {
//		return remember[n];
//	}
//	else {
//		remember[n] = fib(n - 1) + fib(n - 2);
//		return remember[n];
//	}
//}
//
//int main(void) {
//	int T;
//	int in;
//	vector<int> v;
//
//	cin >> T;
//
//
//	for (int i = 0; i < T; i++) {
//		cin >> in;
//		v.push_back(in);
//	}
//
//	for (int i = 0; i < T; i++) {
//		
//		if (v[i] == 0) {
//			cout << 1 << ' ' << 0 << '\n';
//		}
//		else {
//			cout << fib(v[i] - 1) << ' ' << fib(v[i]) << '\n';
//		}
//	}
//}