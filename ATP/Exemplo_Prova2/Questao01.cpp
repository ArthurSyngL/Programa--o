#include <iostream>
#include <string>
using namespace std;
int main(){
    int t, ta=0, tb=0, tc=0;
    float p, sp=0;
    cin>>p>>t;
    while(sp<30){
        sp=sp+p;
        if(t<3){
            ta=ta+1;
        }else if(t<=6){
            tb=tb+1;
        }else{
            tc=tc+1;
        }if(sp<30){
            cin>>p>>t;
        }
        
        
    }
    cout<<"Parafuso do tipo A:"<<ta<<endl;
    cout<<"Parafuso do tipo B:"<<tb<<endl;
    cout<<"Parafuso do tipo C:"<<tc<<endl;
    return 0;
}