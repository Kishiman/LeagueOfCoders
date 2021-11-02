#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>
long long random(long long min,long long max){
    return (rand()%(max-min+1))+min;
}

using namespace std;

int main()
{
	long long minNM,maxNM;
	cin>>minNM>>maxNM;
	random(0,1);
	long long NM=random(minNM,maxNM);
	long long nums[NM];
	for(long long i=0;i<NM;++i){
	    nums[i]=i+1;
	}
	for(long long i=0;i<NM/2;++i){
	    long long a,b;
	    a=random(0,NM-1);
	    b=random(0,NM-1);
	    auto tmp=nums[a];
	    nums[a]=nums[b];
	    nums[b]=tmp;
	}
	long long n=0,m=0;
	long long numsN[NM];
	long long numsM[NM];

	for(long long i=0;i<NM;++i){
	    long long ran=random(0,1);
	    if(ran){
	        numsN[n++]=nums[i];
	    }else{
	        numsM[m++]=nums[i];
	    }
	}
	cout<<n<<" "<<m<<"\n";
	for(long long i=0;i<n;++i){
	    cout<<numsN[i]<<" ";
	}
		cout<<"\n";
	for(long long i=0;i<m;++i){
	    cout<<numsM[i]<<" ";
	}
	cout<<"\n";

	return 0;
}
