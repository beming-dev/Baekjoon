//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int gcp(int a, int b) {
//	if (a % b == 0)
//		return b;
//	return gcp(b, a % b);
//}
//
//int main(void) {
//	int N;
//	int in;
//	int criteria;
//	vector<int> radius;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> in;
//		radius.push_back(in);
//	}
//
//	criteria = radius[0];
//	for (int i = 1; i < N; i++) {
//		if (criteria % radius[i] == 0)
//			cout << criteria / radius[i] << "/" << 1 << '\n';
//		else {
//			int max = gcp(criteria, radius[i]);
//			cout << criteria / max << "/" << radius[i] / max << '\n';
//		}
//	}
//}