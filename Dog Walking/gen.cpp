#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>
long long random(long long min, long long max)
{
	return (rand() % (max - min + 1)) + min;
}

using namespace std;

int main()
{
	long long t, minK, maxN, maxX;
	cin >> t >> minK >> maxN >> maxX;
	random(minK, maxN);
	cout << t << "\n";
	while (t--)
	{
		long long  k, n;
		k = random(minK, maxN);
		n = random(k, maxN);
		cout << n << " " << k  << "\n";
		for (long long i = 0; i < n; ++i)
		{
			cout << random(0, maxX) << "\n";
		}
	}

	return 0;
}
