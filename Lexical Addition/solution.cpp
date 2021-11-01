#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	long long N, A, B;
	cin >> N >> A >> B;
	long long kmin = N / B;
	long kmax = N / A;
	long long P = B - A;
	for (long long k = kmin; k <= kmax; ++k) {
		long long n = N - A * k;
		if (n < 0) {
			cout << "NO" << endl; 
			return 0;
		}
		if (n <= P * k) {
			if (P > 0) {
				long long div = n / (P);
				long long mod = n % (P);
				cout << "YES" << endl;
				for (long long j = 0; j < k - div - 1; ++j) {
					cout << A << " ";
				}
				if (div < k)
					cout << A + mod << " ";
				for (long long j = k - div; j < k; ++j) {
					cout << B << " ";
				}
				return 0;

			} else {
				cout << "YES" << endl;

				for (long long j = 0; j < k; ++j) {
					cout << A << " ";
				}
				return 0;
			}

		}
	}

	cout << "NO" << endl;
	return 0;
}
