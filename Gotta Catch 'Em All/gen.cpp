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
	long long r, c, maxE;
	cin >> r >> c >> maxE;
	random(-maxE, maxE);
	cout << r<<" "<<c << "\n";
	for(int i=0;i<r;++i){
	    for(int j=0;j<c;++j){
	        if(i==0 && j==0)
	        cout<<"0 ";
	        else if(i==r-1 && j==c-1)
	        cout<<"0 ";
	        else
	        cout<<random(-maxE, maxE)<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
