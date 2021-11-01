#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;


struct member{
    string name;
    int height;
    bool operator<(member& other){
        if(height==other.height)
                return name<other.name;
        return height<other.height;
    }
};

int main() {
    int n; 
    cin >> n;
    vector<member> members;
    members.reserve(n);
    for(int i=0;i<n;++i){
        member m;
        cin>>m.name>>m.height;
        members.push_back(m);
    }
    sort(members.begin(),members.end());
    for(int i=0;i<n;++i){
        int start=i;
        int target=members[i].height;
        while(i<n && members[i].height==target){
            ++i;
        }
        --i;
        int end=i;
        for(int j=start;j<=end;++j){
            cout<<members[j].name<<" ";
        }
        cout<<start+1<<" "<<end+1<<"\n";
    }
    return 0;
}