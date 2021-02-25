#include<iostream>

using namespace std;

int length[100000] = { 0 };
int cost[100000] = { 0 };

int main(void) {
	int N;

	cin >> N;

	for (int i = 0; i < N-1; i++) {
		cin >> length[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> cost[i];
	}

	int minCost = 0;
	int partLength = 0;
	int j;

	for (int i = 0; i < N; i++) {
		partLength = 0;
		for (j = i+1; j < N; j++) {
			if (cost[j] < cost[i]) {
				for (int k = i; k < j; k++) {
					partLength += length[k];
				}
				break;
			}
		}
		if (j == N) {
			for (int k = i; k < N; k++) {
				partLength += length[k];
			}
			minCost += partLength * cost[i];
			break;
		}
		else {
			minCost += partLength * cost[i];
			i = j-1;
		}
	}

	cout << minCost;
}