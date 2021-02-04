#include<iostream>

using namespace std;

int main(void) {
	int N;
	int divNum=2;
	cin >> N;

	while (N >= divNum) {
		if (N % divNum == 0) {
			N = N / divNum;
			cout << divNum << endl;
			divNum = 2;
			continue;
		}
		divNum++;
	}
}