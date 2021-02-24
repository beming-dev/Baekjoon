//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int main(void) {
//	char in[50];
//	int wait[25] = { 0 };
//	int idx =0;
//	int sum = 0;
//	int result = 0;
//
//	cin >> in;
//
//	for (int i = 0; i < strlen(in); i++) {
//		if (in[i] == '+') {
//			wait[idx] += sum;
//			sum = 0;
//			
//		}
//		else if (in[i] == '-') {
//			wait[idx] += sum;
//			idx++;
//			sum = 0;
//		}
//		else {
//			sum *= 10;
//			sum += in[i] - '0';
//		}
//	}
//
//	wait[idx] += sum;
//
//	result = wait[0];
//	for (int i = 1; i <= idx; i++) {
//		result -= wait[i];
//	}
//
//	cout << result;
//}