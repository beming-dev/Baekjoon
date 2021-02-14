#include<iostream>
#include<vector>

using namespace std;

int N;
vector<vector<int>> abi;
vector<int> teamA;
vector<int> teamB;
vector<int> result;
vector<bool> checked;

void fillB() {
	int idx = 0;

	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N / 2; j++) {
			if (teamA[j] != i)
				cnt++;
		}
		if (cnt == N / 2)
			if (idx < N / 2)
				teamB[idx++] = i;
	}
}

void calc() {
	int sumA = 0;
	int sumB = 0;

	for (int i = 0; i < N / 2; i++) {
		for (int j = 0; j < N / 2; j++) {
			sumA += abi[teamA[i]][teamA[j]];
			sumA += abi[teamA[j]][teamA[i]];
		}
	}
	for (int i = 0; i < N / 2; i++) {
		for (int j = 0; j < N / 2; j++) {
			sumB += abi[teamB[i]][teamB[j]];
			sumB += abi[teamB[j]][teamB[i]];
		}
	}
	cout << sumA << '\n' << sumB << endl;
	result.push_back(abs(sumA - sumB));
}

void score(int num) {
	if (num == N / 2) {
		fillB();
		calc();
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!checked[i]) {
			checked[i] = true;
			teamA[num] = i;
			score(num + 1);
			checked[i] = true;
			for (int j = i; j < N-1; j++) {
				checked[j+1] = false;
			}
		}
	}
}

int main(void) {
	int in;
	int min = 100;
	cin >> N;

	vector<vector<int>> abi2(N, vector<int>(N, 0));
	abi = abi2;

	for (int i = 0; i < N/2; i++) {
		teamA.push_back(0);
		teamB.push_back(0);
	}

	for (int i = 0; i < N; i++) {
		checked.push_back(false);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> in;
			abi[i][j] = in;
		}
	}

	score(0);
	for (int i = 0; i < result.size(); i++) {
		if (result[i] < min)
			min = result[i];
	}
	cout << min/2;
}