#include<iostream>
#include<vector>

using namespace std;

int arr[9][9];
vector<pair<int, int>> emptys;
bool found = false;

bool ok(int i, int j) {
	for (int x = 0; x < 9; x++) {
		if(x!=j)
			if (arr[i][x] == arr[i][j])
				return false;
	}
	for (int x = 0; x < 9; x++) {
		if(x!=i)
			if (arr[x][j] == arr[i][j])
				return false;
	}
	int col = i / 3;
	int row = j / 3;

	for (int x = col * 3; x < col * 3 + 3; x++) {
		for (int y = row * 3; y < row * 3 + 3; y++) {
			if (x != i && y != j)
				if (arr[x][y] == arr[i][j])
					return false;
		}
	}
	return true;
}

void Sudoku(int N) {
	if (N == emptys.size()) {
		found = true;
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << arr[i][j] << ' ';
			}
			cout << '\n';
		}
		return;
	}

	for (int i = 1; i <= 9; i++) {
		arr[emptys[N].first][emptys[N].second] = i;
		if (ok(emptys[N].first, emptys[N].second)) {
			Sudoku(N + 1);
			
		}
		if (found) return;
	}
	arr[emptys[N].first][emptys[N].second] = 0;
	return;
}

int main(void) {
	pair<int, int> empty;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				empty.first = i;
				empty.second = j;
				emptys.push_back(empty);
			}
		}
	}

	Sudoku(0);

	return 0;
}





//bool ok(int i, int j) {
//	for (int x = 0; x < 9; x++) {
//		if(x!=j)
//			if (arr[i][x] == arr[i][j])
//				return false;
//	}
//	for (int x = 0; x < 9; x++) {
//		if(x!=i)
//			if (arr[x][j] == arr[i][j])
//				return false;
//	}
//	int col = i / 3;
//	int row = j / 3;
//
//	for (int x = col * 3; x < col * 3 + 3; x++) {
//		for (int y = row * 3; y < row * 3 + 3; y++) {
//			if (x != i && y != j)
//				if (arr[x][y] == arr[i][j])
//					return false;
//		}
//	}
//	return true;
//}
//
//void Sudoku(int num) {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			if (arr[i][j] == 0) {
//				arr[i][j] = num;
//				if (ok(i, j)) {
//					Sudoku(1);
//				}
//				else {
//					arr[i][j] = 0;
//					Sudoku(num + 1);
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	
//	Sudoku(1);
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}