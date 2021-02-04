//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int main(void) {
//	int M, N;
//	bool* arr;
//
//	cin >> M >> N;
//
//	arr = new bool[N + 1];
//	fill_n(arr, N + 1, false);
//	arr[0] = true;
//	arr[1] = true;
//
//	for (int i = 2; i <= N; i++) {
//		for (int j = 2; i * j <= N; j++) {
//			arr[i * j] = true;
//		}
//	}
//
//
//
//	for (int i = M; i <= N; i++) {
//		if (!arr[i]) cout << i << endl;
//	}
//}