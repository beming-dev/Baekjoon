//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//bool sSort(string s1, string s2) {
//	if (s1.size() == s2.size())
//		return s1.compare(s2) < 0;
//	else
//		return s1.size() < s2.size();
//}
//
//int main(void) {
//	int N;
//	int j;
//
//	string before;
//	string input;
//	vector<string> v;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> input;
//		v.push_back(input);
//	}
//
//	sort(v.begin(), v.end(), sSort);
//
//	for (int i = 0; i < N; i++) {
//		if (before.compare(v[i]) == 0) continue;
//		cout << v[i] << '\n';
//		before = v[i];
//	}
//}