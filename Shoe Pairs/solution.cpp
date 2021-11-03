#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> left;
    left.reserve(n);
    vector<int> right;
    right.reserve(n);
    for(int i=0;i<n;++i){
        int x;
        char c;
        cin>>x>>c;
        if(c=='L')
            left.push_back(x);
        else
            right.push_back(x);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    int l=0;
    int r=0;
    int count=0;
    while(l<left.size() && r<right.size()){
        if(left[l]==right[r]){
            ++l;
            ++r;
            ++count;
        }else if(left[l]<right[r])
            ++l;
        else
            ++r;
    }
    cout << count;
    return 0;
}