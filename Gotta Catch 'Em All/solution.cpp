#include <iostream>

using namespace std;
int r,c;
int* map;
int* solutions;
int index(int i, int j){
    return j+i*c;
}

int pokemon(int i,int j){
    int idx=index(i,j);
    if(solutions[idx]>-1){
        return solutions[idx];
    }
    int solution=-map[idx];
    if(i==r-1 &&j==c-1){
        solution=max(solution,0);
        solutions[idx]=solution;
        return solution;
    }
    int right=-1;
    int down=-1;
    if(j<c-1){
        right=pokemon(i,j+1);
    }
    if(i<r-1){
        down=pokemon(i+1,j);
    }
    int next;
    if(right>-1 && down>-1){
        next=min(right,down);
    }else {
        next=right>-1?right:down;
    }
    solution+=next;
    solution=max(solution,0);
    solutions[idx]=solution;
    return solution;
}

int main() {

    cin >> r >> c;
    map=new int[r*c];
    solutions=new int[r*c];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            int idx=index(i,j);
            cin>>map[idx];
            solutions[idx]=-1;
        }
    }
    cout<<pokemon(0,0)+1;
    return 0;
}