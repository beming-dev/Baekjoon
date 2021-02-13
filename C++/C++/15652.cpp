//#include<iostream>
//
//using namespace std;
//
//int N, M;
//int arr[8];
//
//void backTrack(int cnt) {
//	if (cnt == M) {
//		for (int i = 0; i < M; i++) {
//			cout << arr[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (cnt > 0) {
//			if (i >= arr[cnt - 1]) {
//				arr[cnt] = i;
//				backTrack(cnt + 1);
//			}
//		}
//		else {
//			arr[cnt] = i;
//			backTrack(cnt + 1);
//		}
//	}
//}
//
//int main(void) {
//	cin >> N >> M;
//	backTrack(0);
//	return 0;
//}