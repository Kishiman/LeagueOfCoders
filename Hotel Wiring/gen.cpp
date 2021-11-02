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
	long long t,minK,maxM,minN,maxN;
	cin>>t>>minK>>maxM>>minN>>maxN;
	random(minK,maxM);
	cout<<t<<"\n";
	while(t--){
	    long long m,k,n;
	    k=random(minK,maxM);
	    m=random(k,maxM);
	    n=random(minN,maxN);
        cout<<m<<" "<<n<<" "<<k<<"\n";
    	for(long long i=0;i<m;++i){
	        cout<<random(0,n)<<"\n";
	    }
	}

	return 0;
}
