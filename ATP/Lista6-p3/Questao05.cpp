#include <iostream>
using namespace std;

int menor(float a, float b){
    if(a<b)
        return a;
    return b;
}

int main(){
    int x, y, z;
    cin>>x>>y>>z;
    cout<<menor(menor(x, y), z);
    return 0;
}
