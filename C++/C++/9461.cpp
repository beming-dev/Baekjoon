#include<iostream>

using namespace std;

int rem[101] = { 0, 1, 1, 1, 2, 2, 3, };

int padovan(int n) {

	if (rem[n])
		return rem[n];

	rem[n] = padovan(n - 1) + padovan(n - 5);
	return rem[n];
}

int main(void) {
	int T;
	int n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << padovan(n) << '\n';
	}
	return 0;
}