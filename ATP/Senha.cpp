#include <iostream>
#include <string>
using namespace std;
int main(){
    int sj=137,sf,y,t;
    t=1;
    cin>>sf;
    while(sf!= sj && t<5){
        cin>>sf;
        t=t+1;
    }
    cout<<"Tentativa:\n"<<t;
    return 0;

}