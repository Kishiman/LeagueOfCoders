#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>
long long random(long long min,long long max){
    return (rand()%(max-min))+min;
}

using namespace std;

int main()
{
	long long minN,maxN,minA,maxB;
	cin >> minN>>maxN>>minA>>maxB;
	long long n,a,b;
	n=random(minN,maxN);
    a=random(minA,maxB);
    b=random(a,maxB);
	cout<<n<<" "<<a<<" "<<b<<"\n";
	return 0;
}
