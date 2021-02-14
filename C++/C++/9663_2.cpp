//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N;
//int cnt = 0;
//vector<int> chess;
//
//bool check(int level) {
//	for (int i = 0; i < level; i++) {
//		if (chess[i] == chess[level] || abs(chess[i] - chess[level]) == (level - i))
//			return false;
//	}
//	return true;
//}
//
//void nQueen(int num) {
//	if (num == N) {
//		cnt++;
//		return;
//	}
//	
//	for (int i = 1; i <= N; i++) {
//		chess[num] = i;
//		if (check(num)) {
//			nQueen(num + 1);
//		}
//	}
//}
//
//int main(void) {
//	cin >> N;
//	
//	for (int i = 0; i < N; i++) {
//		chess.push_back(0);
//	}
//
//
//	nQueen(0);
//
//	cout << cnt;
//}