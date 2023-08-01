#include <iostream>
#include <string>
using namespace std;
int main (){
    int i, qf, id, fn=0,m,m1; 
    string n;
    for(i=0;i<10;i++){
        cin>>n>>qf>>m;
        if(qf>=1){
            cin>>id;
        }
        m1=m;
        fn=id;
        if (id<fn){
            m1=m;
            fn=id;
        }  
    }
    cout<<m<<endl;
    return 0;
}