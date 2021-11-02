#include <iostream>
#include <vector>

using namespace std;


struct fib{
    int n=0;
    long long prev=0;
    long long value=1;
    long long next=1;
    bool solved=false;
    fib* half=nullptr;
    void solve(){
        if(n==0){
            solved=true;
        }
        if(n==1){
            prev=1;
            value=1;
            next=2;
            solved=true;
            return;
        }
        if(half && !half->solved){
            half->solve();
        }
        if(n%2==0){
            value=half->value*half->value+half->prev*half->prev;
            next=half->value*half->next+half->prev*half->value;
            prev=next-value;
        }
        else{
            prev=half->value*half->value + half->prev*half->prev;
            value=half->value*half->next + half->prev*half->value;
            next=value+prev;
        }        
        prev+=100;
        value+=100;
        next+=100;
        
        prev%=10;
        value%=10;
        next%=10;
        
        solved=true;
        return;
    }
};


int main() {
    int t;
    cin >> t;
    while(t--){
        long long m;
        cin>>m;
        vector<fib> fibs;
        fibs.reserve(32);
        //m=1e9-4;
        long long k=m;
        while(k){
            fib x;
            x.n=k;
            fibs.push_back(x);
            k/=2;
        }
        for(unsigned int i=0;i<fibs.size()-1;++i){
            fibs[i].half=&fibs[i+1];
            //cout<<fibs[i].n<<":"<<fibs[i].half->n<<"\n";
        }
        fibs[0].solve();
        
        for(unsigned int i=0;i<fibs.size();++i){
            //cout<<fibs[i].n<<"=="<<fibs[i].prev<<"<"<<fibs[i].value<<"<"<<fibs[i].next<<"\n";
        }
        
        cout<<fibs[0].value<<"\n";
    }
    return 0;
}