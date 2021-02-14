//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N;
//vector<int> arr;
//vector<int> operator_num;
//vector<int> result;
//
//void calc() {
//	int ans = arr[0];
//
//	for (int i = 0; i < N - 1; i++) {
//		int c = 2 * i + 1;
//		switch (arr[c]) {
//		case 1:
//			ans = ans + arr[c + 1];
//			break;
//		case 2:
//			ans = ans - arr[c + 1];
//			break;
//		case 3:
//			ans = ans * arr[c + 1];
//			break;
//		case 4:
//			ans = ans / arr[c + 1];
//		}
//	}
//
//	result.push_back(ans);
//}
//
////1:+ 2:- 3:* 4:/
//
//void back(int num) {
//	if (num == N-1) {
//		calc();
//	}
//	else {
//		for (int j = 0; j < 4; j++) {
//			if (operator_num[j] != 0) {
//				arr[2 * num + 1] = j + 1;
//				operator_num[j]--;
//				back(num + 1);
//				operator_num[j]++;
//			}
//		}
//	}
//}
//
//int main(void) {
//	int an;
//	int min=1000000000, max=-1000000000;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> an;
//
//		arr.push_back(an);
//		arr.push_back(0);
//	}
//
//	for (int i = 0; i < 4; i++) {
//		cin >> an;
//		operator_num.push_back(an);
//	}
//
//	back(0);
//
//	//for (int i = 0; i < result.size(); i++) {
//	//	cout << result[i];
//	//}
//	//cout << endl << endl;
//
//	for (int i = 0; i < result.size(); i++) {
//		if (result[i] < min)
//			min = result[i];
//	}
//	for (int i = 0; i < result.size(); i++) {
//		if (result[i] > max)
//			max = result[i];
//	}
//
//	cout << max << '\n' << min;
//}