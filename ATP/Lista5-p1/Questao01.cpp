#include <iostream>
#include <string>
using namespace std;
int main(){
    int mp=-1, nm, t;
    t=0;
    cin>>nm;
    while(nm!=mp){  
        if(nm%5 == 0){
            t=t+1;
        }
    cin>>nm;
    }
    cout<<"\n"<<t;
    return 0;
}