#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void) {
	int N, n;
	float mean;
	int sum=0, mid, most, range;
	int mostArr[8001] = {0};
	vector<int> v;
	vector<int> v2;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n;
		v.push_back(n);
	}

	for (int i = 0; i < N; i++) {
		sum += v[i];
	}

	mean = round((double)sum / N);

	sort(v.begin(), v.end());
	mid = v[((N+1) / 2) -1];


	range = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		mostArr[v[i]+4000]++;
	}

	int max = *max_element(mostArr, mostArr + 8001);
	for (int i = 0; i < 8001; i++) {
		
		if (mostArr[i] == max)
			v2.push_back(i - 4000);
	}
	if (v2.size() == 1) {
		most = v2[0];
	}
	else {
		most = v2[1];
	}
	

	cout << mean << '\n' << mid << '\n' << most << '\n' << range;
}
