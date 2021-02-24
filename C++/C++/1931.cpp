//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//bool mySort(vector<int> a, vector<int> b) {
//	if (a[1] == b[1]) return a[0] < b[0];
//	else return a[1] < b[1];
//}
//
//int main(void) {
//	int N;
//	int cnt=0;
//
//	cin >> N;
//
//	vector<vector<int>> arr(N, vector<int>(2, 0));
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i][0];
//		cin >> arr[i][1];
//	}
//
//	sort(arr.begin(), arr.end(), mySort);
//
//	int endTime = arr[0][1];
//	cnt++;
//
//	for (int i = 1; i < N; i++) {
//		if (arr[i][0] >= endTime) {
//			cnt++;
//			endTime = arr[i][1];
//		}
//	}
//
//	cout << cnt;
//
//
//	/*for (int i = 0; i < N; i++) {
//		cout << arr[i][0] <<' '<< arr[i][1] << '\n';
//	}*/
//}