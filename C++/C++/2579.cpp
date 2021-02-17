//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main(void) {
//	int n, i;
//	int num;
//
//	vector<int> stair;
//
//	cin >> n;
//
//	vector<int> maxArr(n, 0);
//
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		stair.push_back(num);
//	}
//	maxArr[0] = stair[0];
//	maxArr[1] = stair[0] + stair[1];
//	maxArr[2] = max(stair[0] + stair[2], stair[1] + stair[2]);
//
//	for (i = 3; i < n; i++) {
//		maxArr[i] = max(maxArr[i - 2] + stair[i], maxArr[i - 3] + stair[i - 1] + stair[i]);
//	}
//
//	cout << maxArr[n - 1];
//	return 0;
//}