//#include<iostream>
//
//using namespace std;
//
//int N;
//
//int rem[1000001] = {0, 1, 2, };
//
//int tile(int N) {
//	if (rem[N]) return rem[N];
//
//	rem[N] = (tile(N - 1) + tile(N - 2)) % 15746;
//	return rem[N];
//}
//
//int main(void) {
//
//	cin >> N;
//
//	cout << tile(N);
//	return 0;
//}



//void tile(int idx) {
//	if (idx > N)
//		return;
//	if (idx == N) {
//		cnt++;
//		return;
//	}
//
//
//	tile(idx + 2);
//	tile(idx + 1);
//}
//
//int tileCall(int idx) {
//	if (rem[idx])
//		return rem[idx];
//	else
//		tile(idx);
//}
