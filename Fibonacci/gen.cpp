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
	long long t,minM,maxM;
	cin>>t>>minM>>maxM;
	random(minM,maxM);
	cout<<t<<"\n";
	for(long long i=0;i<t;++i){
	    cout<<random(minM,maxM)<<"\n";
	}
	return 0;
}
