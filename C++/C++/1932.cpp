//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main(void) {
//	int n;
//
//	cin >> n;
//
//	vector<vector<int>> triangle(n, vector<int>(n, 0));
//	vector<vector<int>> remember(n, vector<int>(n, 0));
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++)
//			cin >> triangle[i][j];
//	}
//	remember[0][0] = triangle[0][0];
//
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j == 0) {
//				remember[i][j] = remember[i - 1][j] + triangle[i][j];
//			}
//			else if (j == i) {
//				remember[i][j] = remember[i - 1][j-1] + triangle[i][j];
//			}
//			else {
//				remember[i][j] = max((remember[i-1][j-1]+ triangle[i][j]), (remember[i-1][j]+ triangle[i][j]));
//			}
//		}
//	}
//
//	int max = 0;
//
//	for (int i = 0; i < n; i++) {
//		if (remember[n - 1][i] > max)
//			max = remember[n - 1][i];
//	}
//
//	cout << max;
//}