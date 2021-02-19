//#include<iostream>
//
//using namespace std;
//
//int main(void) {
//	int arr[1001] = { 0 };
//	int bytonic[1001] = { 0 };
//	int bytonic_r[1002] = { 0 };
//	int maxIdx = 0;
//	int max = 0;
//	int min = 0;
//	int N;
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//		if (max <= arr[i]) {
//			max = arr[i];
//			maxIdx = i;
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		max = 0;
//		for (int j = 0; j < i; j++) {
//			if (arr[j] < arr[i]) {
//				if (max < bytonic[j])
//					max = bytonic[j];
//			}
//		}
//		bytonic[i] = max + 1;
//	}
//
//	for (int i = N; i >= 1; i--) {
//		max = 0;
//		for (int j = N+1; j > i; j--) {
//			if (arr[j] < arr[i]) {
//				if (max < bytonic_r[j])
//					max = bytonic_r[j];
//			}
//		}
//		bytonic_r[i] = max + 1;
//	}
//
//	max = 0;
//	for (int i = 0; i <= N; i++) {
//		if (bytonic[i] + bytonic_r[i] -1 > max)
//			max = bytonic[i] + bytonic_r[i] - 1;
//	}
//	cout << max;
//}