//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int dp[101][100001] = { 0 };
//
//int main(void) {
//	int N, K;
//	int bag[101][2];
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> bag[i][0];
//		cin >> bag[i][1];
//	}
//
//	
//	for (int i = 1; i <= N; i++) {
//		int weight = bag[i][0];
//		int val = bag[i][1];
//			for (int j = 0; j <= K; j++) {
//				if (j < bag[i][0]) dp[i][j] = dp[i - 1][j];
//				else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight] + val);
//			}
//	}
//
//	cout << dp[N][K];
//}