//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int dp[100001] = {0};
//int num[100001] = { 0 };
//
//int main(void) {
//	int n, in;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//
//	dp[1] = num[1];
//	for (int i = 2; i <= n; i++) {
//		dp[i] = max(dp[i - 1] + num[i], num[i]);
//	}
//
//	int max = -1000;
//	for (int i = 1; i <= n; i++) {
//		if (dp[i] > max) max = dp[i];
//	}
//
//	cout << max;
//}
//
//
//






//int main(void) {
//	int n, in;
//	vector<int> num;
//	cin >> n;
//
//	num.push_back(0);
//	for (int i = 0; i < n; i++) {
//		cin >> in;
//		num.push_back(in);
//	}
//
//	int j=0;
//	dp[0] = num[1];
//
//	for (int i = 1; i <= n; i++) {
//		int sum = num[i];
//		for (j = i+1; dp[i-1] <= sum; j++) {
//			if (j >= n) break;
//			sum += num[j];
//		}
//		if(j<n)
//			sum -= num[j];
//		dp[i] = sum;
//	}
//
//	int max = 0;
//	for (int i = 1; i <= n; i++) {
//		if (dp[i] > max) max = dp[i];
//	}
//
//	cout << max;
//}