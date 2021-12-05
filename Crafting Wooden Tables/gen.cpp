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
	long long min, max;
	cin >> min >> max;
	random(min, max);
		long long c, n,p,w;
		c = random(min, max);
		n = random(min, max);
		p = random(min, max);
		w = random(0, n*p);
		cout << c << " " << n << " " << p << " " << w <<"\n";	
	return 0;
}
