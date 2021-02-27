#include <iostream>
using namespace std;

int n, k, c[1001][1001];
int main() {
    cin >> n >> k;
    c[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j - 1 < 0)c[i][j] = c[i - 1][j];
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % 10007;
        }
    }
    printf("%d", c[n][k]);
}












//#include<iostream>
//
//using namespace std;
//
//long long dp[1000];
//
//long long fac(int n) {
//	if (dp[n])
//		return dp[n];
//	if (n == 0) {
//		dp[0] = 1;
//		return dp[0];
//	}
//	dp[n] = n * fac(n-1);
//	return dp[n];
//}
//int main(void) {
//	int N, K;
//	long long a=1;
//
//	cin >> N >> K;
//
//	if(N-K < K){
//		K = N - K;
//	}
//
//	for (int i = 0; i < K; i++) {
//		a *= N;
//		N--;
//	}
//
//	K = fac(K);
//
//	cout << (a / K) % 10007;
//}