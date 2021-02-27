//#include<iostream>
//
//using namespace std;
//
//int Euclid(int a, int b) {
//	if (a%b == 0) {
//		return b;
//	}
//	return Euclid(b, a % b);
//}
//
//int main(void) {
//	int T;
//	int n1, n2;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		cin >> n1 >> n2;
//		int ans = Euclid(n1, n2);
//		cout << n1 * n2/ans << '\n';
//	}
//}