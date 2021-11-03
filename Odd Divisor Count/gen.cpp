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
	long long maxA, maxB;
	cin >> maxA >> maxB;
	random(maxA, maxB);
	long long a = random(1, maxA);
	long long b = random(a, maxB);
	cout << a << " " << b;
	return 0;
}
