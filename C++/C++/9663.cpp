//#include <iostream>
//#define MAX 15
//using namespace std;
//
//int col[MAX];
//int N, total = 0;
//
//bool check(int level)
//{
//    for (int i = 0; i < level; i++)
//        if (col[i] == col[level] || abs(col[level] - col[i]) == level - i)
//            return false;
//    
//    return true;
//}
//
//void nqueen(int x)
//{
//    if (x == N)
//        total++;
//    else
//    {
//        for (int i = 0; i < N; i++)
//        {
//            col[x] = i;
//            if (check(x)) 
//                nqueen(x + 1);
//        }
//    }
//}
//int main() {
//    cin >> N;
//    nqueen(0);
//    cout << total;
//}



//fail

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int cnt;
//int N;
//
//vector<vector<int>> v;
//
//// 0 : 퀸 놓을 수 있는 위치
//// 1 : 퀸이 놓인 위치
//// 2 : 퀸을 놓을 수 없는 위치 

//void fill(int i, int j) {
//	int Max = ((N - j) > (N - i)) ? (N - j) : (N - i);
//
//	for (int p = 1; p <= j; p++) {
//		v[i][j - p] = 2;
//	}
//	for (int p = 1; p < N - j; p++) {
//		v[i][j + p] = 2;
//	}
//	for (int q = 1; q <= i; q++) {
//		v[i - q][j] = 2;
//	}
//	for (int q = 1; q < N - i; q++) {
//		v[i + q][j] = 2;
//	}
//	for (int p = 0; p < Max; p++) {
//		if ((i - p) >= 0 && (j - p) >= 0)
//			v[i - p][j - p] = 2;
//		if ((i + p) < N && (j + p) < N)
//			v[i + p][j + p] = 2;
//		if ((i - p) >= 0 && (j + p) < N)
//			v[i - p][j + p] = 2;
//		if ((i + p) < N && (j - p) >= 0)
//			v[i + p][j - p] = 2;
//	}
//}
//
//void nQueen(int num) {
//	if (num == N)
//		cnt++;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (v[i][j] == 0) {
//				v[i][j] = 1;
//
//				fill(i, j);
//
//				nQueen(num + 1);
//				v[i][j] = 0;
//			}
//		}
//	}
//}
//
//int main(void) {
//	cin >> N;
//	vector<vector<int>> v2(N, vector<int>(N, 0));
//		
//	vector<vector<int>> v(v2);
//
//	nQueen(0);
//
//	cout << cnt;
//
//	return 0;
//}