//#include<iostream>
//
//const int MAX = 8;
//using namespace std;
//
//int N, M;
//int arr[MAX];
//bool checked[MAX];
//
//void back(int cnt) {
//	if (cnt == M) {
//		for (int i = 0; i < M; i++)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (!checked[i]) {
//			checked[i] = true;
//			arr[cnt] = i;
//			back(cnt + 1);
//			checked[i] = true;
//			for (int j = i; j < N; j++) {
//				checked[j+1] = false;
//			}
//		}
//	}
//}
//
//int main(void) {
//	cin >> N >> M;
//
//	back(0);
//}