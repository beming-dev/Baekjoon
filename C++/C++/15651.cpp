#include<iostream>

using namespace std;

int N, M;
int arr[7];
bool checked[7];

void backTrack(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!checked[i]) {
			arr[cnt] = i;
			backTrack(cnt + 1);
		}
	}
}

int main(void) {
	cin >> N >> M;
	backTrack(0);
	return 0;
}