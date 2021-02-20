//#include<iostream>
//
//using namespace std;
//
//int main(void) {
//	int N, K;
//	int cnt=0;
//	int coin[11];
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> coin[i];
//	}
//
//	for (int i = N; i > 0; i--) {
//		if (coin[i] <= K) {
//			cnt += K / coin[i];
//			K -= coin[i] * (K / coin[i]);
//		}
//	}
//
//	cout << cnt;
//}