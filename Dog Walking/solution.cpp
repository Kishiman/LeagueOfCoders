#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct dog_inter {
    long long prevSize;
    long long nextSize;
    bool operator<(dog_inter& other){
        return (prevSize-prevSize)<(other.prevSize-other.nextSize);
    }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n>>k;
        vector<long long> dogs;
        dogs.reserve(n);
        for(int i=0;i<n;++i){
            long long x;
            cin>>x;
            dogs.push_back(x);
        }
        sort(dogs.begin(),dogs.end());
        vector<long long> sizesDiff;
        sizesDiff.reserve(n);
        for(int i=1;i<n;++i){
            if(dogs[i]!=dogs[i-1]){
                sizesDiff.push_back(dogs[i]-dogs[i-1]);
            }
        }
        int ss=sizesDiff.size()+1;
        if(ss<=k){
            cout<<0<<"\n";
            continue;
        }
        sort(sizesDiff.begin(),sizesDiff.end());
        long long result=0;
        int margin=ss-k;
        for(int i=0;i<margin;++i){
            result+=sizesDiff[i];
        }
        cout<<result<<"\n";
        
        
    }

    return 0;
}