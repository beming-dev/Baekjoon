#include<iostream>
#include<string>

using namespace std;

int calc(string A, string B, int ans[]) {
	int bIdx = B.size();
	int bV;

	for (int i = A.size()-1; i >= 0; i--) {
		bIdx--;
		if (bIdx < 0) { bV = '0'; }
		else { bV = B[bIdx]; }

		if ((A[i] - '0') + (bV - '0') + ans[i+1] >= 10) {
			ans[i + 1] += (A[i] - '0') + (bV - '0') + ans[i] - 10;
			ans[i]++;
		}
		else {
			ans[i + 1] += (A[i] - '0') + (bV - '0') + ans[i];
		}
	}
	return A.size();
}

int main() {
	int ans[10001] = { 0 };

	string A, B;
	cin >> A >> B;
	
	int long_size = (A.size() > B.size()) ? calc(A, B, ans) : calc(B, A, ans);

	for (int i=0; i <= long_size; i++) {
		if (i==0) if (ans[i] == 0) continue;
		cout << ans[i];
	}
}