#include<iostream>

using namespace std;

int main(void) {
	int num;
	
	int count = 1;
	int sum = 0;
	int denominator = 0;
	int numerator = 0;

	cin >> num;

	for (sum = 0; sum < num; count++) {
		sum += count;
	}

	sum = (count-1)*(count-2)/2;
	int ite = num - sum;

	if (count % 2 == 0) {
		numerator = count - 1;
		denominator = 1;

		for (int i = 1; i < ite; i++) {
			numerator--;
			denominator++;
		}
	}else {
		numerator = 1;
		denominator = count - 1;

		for (int i = 1; i < ite; i++) {
			numerator++;
			denominator--;
		}
	}
	cout << numerator << "/" << denominator;
}