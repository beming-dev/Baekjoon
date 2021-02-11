#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//bool mySort(vector<string> s1, vector <string> s2) {
//	if (s1[0].compare(s2[0]) == 0)
//		return false;
//	else
//		return s1 < s2;
//}

bool mySort(pair<int, string> s1, pair<int, string> s2) {
	return s1.first < s2.first;
}

//1.
int main(void) {
	int N;
	vector<int> ageV;
	vector<string> nameV;

	cin >> N;
	
	vector<pair<int, string>> v(N);
	
	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		cin >> v[i].second;
	}

	stable_sort(v.begin(), v.end(), mySort);
	
	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}
}












//2. time over

//void mySort(vector<int> &age, vector<string> &name, int N) {
//	int min;
//	int temp;
//	string tempS;
//
//	for (int i = 0; i < N; i++) {
//		min = i;
//		for (int j = i + 1; j < N; j++) {
//			if (age[j] < age[min]) {
//				min = j;
//			}
//		}
//		temp = age[min];
//		age[min] = age[i];
//		age[i] = temp;
//
//		tempS = name[min];
//		name[min] = name[i];
//		name[i] = tempS;
//	}
//}
//
//int main(void) {
//	int N;
//	int age;
//	string name;
//	vector<int> ageV;
//	vector<string> nameV;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> age;
//		cin >> name;
//
//		ageV.push_back(age);
//		nameV.push_back(name);
//	}
//
//	mySort(ageV, nameV, N);
//
//	for (int i = 0; i < N; i++) {
//		cout << ageV[i] << " " << nameV[i] << '\n';
//	}
//}