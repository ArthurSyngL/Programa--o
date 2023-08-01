#include <iostream>
using namespace std;

float absoluto(float x){
    if (x<0)
        x = -1*x;
    return x;
}

int main(){
    float x;
    cin>>x;
    cout<<absoluto(x);
    return 0;
}
