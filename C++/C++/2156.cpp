//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main(void) {
//	int n;
//	int in;
//	vector<int> vine;
//
//	cin >> n;
//
//	vector<int> rem(n, 0);
//
//	for (int i = 0; i < n; i++) {
//		cin >> in;
//		vine.push_back(in);
//	}
//
//	rem[0] = vine[0];
//	rem[1] = vine[0] + vine[1];
//	rem[2] = max({ vine[0] + vine[2], vine[0] + vine[1], vine[1] + vine[2] });
//
//	for (int i = 3; i < n; i++) {
//		rem[i] = max({ rem[i - 3] + vine[i - 1] + vine[i], rem[i - 2] + vine[i] , rem[i-1]});
//	}
//
//	cout << rem[n-1];
//}