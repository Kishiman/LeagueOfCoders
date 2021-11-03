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
	long long minN,maxN,maxE;
	cin>>minN>>maxN>>maxE;
	random(minN,maxN);
	long long n=random(minN,maxN);
	cout<<n<<"\n";
	while(n--){
	    cout<<random(0,maxE)<<" ";
	}

	return 0;
}
