#include<iostream>

using namespace std;

int main(void) {
	int n, tmp;
	int count[10001] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		count[tmp]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++)
			cout << i;
	}
}