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
	long long minN, maxN, maxE;
	cin >> minN >> maxN >> maxE;
	random(minN, maxN);
	long long n = random(minN, maxN);
	cout << n << "\n";
	while (n--)
	{
		cout << random(1, maxE) << " ";
	}

	return 0;
}
