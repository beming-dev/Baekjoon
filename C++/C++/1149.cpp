//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int rgb[3][1000];
//int rem[3][1000];
//
//int main(void) {
//	int N;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> rgb[0][i] >> rgb[1][i] >> rgb[2][i];
//	}
//
//	rem[0][0] = rgb[0][0];
//	rem[1][0] = rgb[1][0];
//	rem[2][0] = rgb[2][0];
//
//	for (int i = 1; i < N; i++) {
//		rem[0][i] = min(rem[1][i - 1], rem[2][i - 1]) + rgb[0][i];
//		rem[1][i] = min(rem[0][i - 1], rem[2][i - 1]) + rgb[1][i];
//		rem[2][i] = min(rem[1][i - 1], rem[0][i - 1]) + rgb[2][i];
//	}
//
//	cout << min({ rem[0][N - 1], rem[1][N - 1], rem[2][N - 1] });
//
//	return 0;
//}