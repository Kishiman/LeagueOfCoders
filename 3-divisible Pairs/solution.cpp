#include <iostream>

using namespace std;
int binomialCoefficients(int n, int k) {
   if (k == 0 || k == n)
   return 1;
   return binomialCoefficients(n - 1, k - 1) + binomialCoefficients(n - 1, k);
}

int main() {
    int n;
    cin >>n;
    int nums[n];
    long long mod[3]={0,0,0};
    for(int i=0;i<n;++i){
        cin>>nums[i];
        ++mod[nums[i]%3];
    }
    long long result=0;
    result=mod[1]*mod[2];
    if(mod[0]>=2){
        result+=(mod[0])*(mod[0]-1)/2;
    }
    cout<<result;
    return 0;
}