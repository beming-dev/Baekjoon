//#include<iostream>
//
//using namespace std;
//
//int N;
//int cnt;
//
//int rem[1000001] = { 0, 1, 2, };
//
//
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
//
//
//int main(void) {
//
//	cin >> N;
//	tile(0);
//
//	cout << cnt;
//	return 0;
//}
//
//
