#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using namespace std;

int main() {
    int128_t  c,n,p,w,res;
    
    cin >> c >> n>>p>>w;
    res=w/c;
    if(c>=p){
        cout<<res;
        return 0;
    }
    int128_t  diff=p-c;
    int128_t  empty=n*p-w;
    res=min(empty/diff,res);
    cout<<res;
    return 0;
}