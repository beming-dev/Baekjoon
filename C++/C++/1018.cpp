//#include<iostream>
//
//using namespace std;
//
//int main(void) {
//	int M, N;
//	int min=1000;
//	char box[50][50];
//
//	cin >> M >> N;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> box[i][j];
//		}
//	}
//
//	for (int i = 0; i < M - 7; i++) {
//		for (int j = 0; j < N - 7; j++) {
//			int cB = 0;
//			int cW = 0;
//			for (int p = 0; p < 8; p++) {
//				for (int q = 0; q < 8; q++) {
//					if ((p + q) % 2 == 0) {
//						if (box[i + p][j + q] == 'B') {
//							cW++;
//						}
//						else {
//							cB++;
//						}
//					}
//					else {
//						if (box[i + p][j + q] == 'W') {
//							cW++;
//						}
//						else {
//							cB++;
//						}
//					}
//				}
//			}
//			if (((cW < cB) ? cW : cB) < min) {
//				min = (cW < cB) ? cW : cB;
//			}
//		}
//	}
//
//	cout << min;
//}