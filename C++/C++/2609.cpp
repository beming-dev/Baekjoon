#include<iostream>

using namespace std;

int main(void) {
	int n1, n2;
	int min = 0, max = 0;

	cin >> n1 >> n2;

	if (n2 > n1) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = n2; i > 0; i--) {
		if (n1 % i == 0 && n2 % i == 0) {
			max = i;
			break;
		}
	}

	for (int i = 1; i <= n1; i++) {
		if ((n2 * i) % n1 == 0) {
			min = n2 * i;
			break;
		}
	}

	cout << max << '\n' << min;
}