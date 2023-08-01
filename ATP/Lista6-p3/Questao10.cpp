#include <iostream>
using namespace std;

int inverso(int x){
    int c, d, u;
    u = x%10;
    x = x/10;
    d = x%10;
    x = x/10;
    c = x;
    return u*100+d*10+c;
}

int main(){
    int x;
    cin>>x;
    cout<<inverso(x);
    return 0;
}
