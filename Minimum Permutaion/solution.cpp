//============================================================================
// Name        : Minimum.cpp
// Author      : Kishiman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	long N, M;
	cin >> N >> M;
	vector<long> A;
	A.reserve(N);
	vector<long> S;
	S.reserve(M);
	for (long i = 0; i < N; ++i) {
		long x;
		cin >> x;
		A.push_back(x);
	}
	for (long i = 0; i < M; ++i) {
		long x;
		cin >> x;
		S.push_back(x);
	}
	sort(S.begin(), S.end());
	long j = 0;
	for (long i = 0; i < M; ++i) {
		while (j < N && A[j] < S[i]) {
			cout << A[j] << " ";
			++j;
		}
		cout << S[i] << " ";
	}
	for (; j < N; ++j) {
		cout << A[j] << " ";
	}

	return 0;
}
