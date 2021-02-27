#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int gcp(long long a, long long b) {
	if (a % b == 0) {
		return b;
	}
	return gcp(b, a % b);
}

int main(void) {
	int N;
	long long in;
	long long max = 0;
	vector<long long> num;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> in;
		num.push_back(in);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < N - 1; i++) {
		num[i] = num[i + 1] - num[i];
	}

	max = num[0];
	for (int i = 1; i < N - 1; i++) {
		max = gcp(max, num[i]);
	}

	for (int i = 2; i <= max; i++) {
		if (max % i == 0)
			cout << i << ' ';
	}
}


//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main(void) {
//	int N, in;
//	int rem;
//	vector<int> num;
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> in;
//		num.push_back(in);
//	}
//	for (int i = 2; i < num[0]; i++) {
//		int j = 0;
//		rem = num[0] % i;
//		for (j = 1; j < num.size(); j++) {
//			if (num[j] % i != rem) {
//				break;
//			}
//			rem = num[j] % i;
//		}
//		if(j == num.size())
//			cout << i << ' ';
//	}
//}