//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void merge(vector<int>& list, int left, int mid, int right) {
//	int i, j, k, l;
//	vector<int> sorted(list);
//	i = left;
//	j = mid + 1;
//	k = left;
//
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//
//	if (i > mid) {
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	}
//	else {
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//	}
//
//	for (l = left; l <= right; l++)
//		list[l] = sorted[l];
//}
//
//void mergeSort(vector<int>& list, int left, int right) {
//	int mid;
//
//	if (left < right) {
//		mid = (left + right) / 2;
//		mergeSort(list, left, mid);
//		mergeSort(list, mid+1, right);
//		merge(list, left, mid, right);
//	}
//}
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	int N;
//	vector<int> v;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		int get;
//		cin >> get;
//		v.push_back(get);
//	}
//
//	mergeSort(v, 0, N - 1);
//
//	for (int i = 0; i < N; i++) {
//		cout << v[i] << '\n';
//	}
//}