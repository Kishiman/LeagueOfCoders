#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ra=ceil(sqrt(a));
    int rb=floor(sqrt(b));
    cout<<rb-ra+1;
    return 0;
}