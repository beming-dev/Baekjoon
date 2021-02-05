#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void) {
	int T;
	int x1, y1, x2, y2, r1, r2;
	int dis = 0;
	cin >> T;

	vector<int> v;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		if (dis == 0) {
			if (r1 == r2) v.push_back(-1);
			else v.push_back(0);
		}
		else if (dis == abs(r1 - r2) || dis == abs(r1 + r2)) {
			v.push_back(1);
		}
		else if (dis > abs(r1 - r2) && dis < abs(r1 + r2)) {
			v.push_back(2);
		}
		else {
			v.push_back(0);
		}
	}

	for (int i = 0; i < T; i++) {
		cout << v[i] << endl;
	}
	return 0;
}