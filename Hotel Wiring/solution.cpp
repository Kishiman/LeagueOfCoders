#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long m,n,k;
        cin>>m>>n>>k;
        vector<long long> floors;
        floors.reserve(m);
        for(long long i=0;i<m;++i){
            long long correct;
            cin>>correct;
            floors.push_back(correct);
        }
        sort(floors.begin(),floors.end());
        long long max=0;
        for(long long i=0;i<m;++i){
            //cout<<floors[i]<<" ";
        }
        for(long long i=0;i<k;++i){
            max+=n-floors[i];
        }
        for(long long i=k;i<m;++i){
            max+=floors[i];
        }
        cout<<max<<"\n";
    }
    return 0;
}