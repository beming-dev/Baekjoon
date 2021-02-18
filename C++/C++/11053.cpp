#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	int n;
	int in;
	vector<int> arr;

	cin >> n;

	vector<int> dp(n+1, 0);

	arr.push_back(0);

	for (int i = 0; i < n; i++) {
		cin >> in;
		arr.push_back(in);
	}

	dp[0] = 0;
	int max = 0;

	for (int i = 1; i <= n; i++) {
		max = 0;
		for (int j = 0; j <= i; j++) {
			if (arr[j] < arr[i])
				if (max < dp[j])
					max = dp[j];
		}
		dp[i] = max + 1;
	}

	max = 0;
	for (int i = 0; i < n+1; i++) {
		if (dp[i] > max)
			max = dp[i];
	}
	cout << max;
}