//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//int main() {
//	int max = 0;
//	int n =0;
//	int count = 0;
//	vector<int> v;
//
//	while (1) {
//		cin >> n;
//		if (n == 0) break;
//		if (n > max) max = n;
//		v.push_back(n);
//	}
//
//	bool* box = new bool[max * 2 + 1];
//	fill_n(box, max * 2 + 1, true);
//	box[0] = false;
//	box[1] = false;
//	for (int i = 2; i <= sqrt(2*max); i++) {
//		if (box[i] == true) {
//			for (int j = i*2; j <= (2 * max); j += i) {
//				box[j] = false;
//			}
//		}
//	}
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = v[i] + 1; j <= 2 * v[i]; j++) {
//			if (box[j] == true)
//				count++;
//		}
//		cout << count << endl;
//		count = 0;
//	}
//	return 0;
//}