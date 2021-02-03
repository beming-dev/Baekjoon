#include<iostream>
#include<vector>

using namespace std;

void calc(unsigned int distance) {
	int countNum=1;
	int answer = 0;

	while (1) {
		if ((countNum * (countNum + 1)) >= distance) break;
		countNum++;
	}
	int creteria = (countNum* (countNum + 1)) - 2*countNum;

	if (creteria < distance && creteria + countNum >= distance) {
		answer = 2*countNum - 1;
	}
	else {
		answer = 2*countNum;
	}
	cout << answer << endl;
}

int main() {
	int T;
	unsigned distance = 0;
	unsigned int x, y;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		distance = y-x;
		calc(distance);
	}
}