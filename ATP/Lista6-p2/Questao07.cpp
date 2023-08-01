#include <iostream>
using namespace std;

float y1(float x){
    return x*x + 2*x - 2;
}
float y2(float x){
    return 20*x - 18;
}
int main(){
    float x, qy2 = 0;
    cin>>x;
    while(x!=-1){
        if(y2(x)>y1(x))
            qy2++;
        cout<<y1(x)<<"::"<<y2(x)<<endl;
        cin>>x;
    }
    cout<<qy2;

    return 0;
}
