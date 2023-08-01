#include <iostream>
#include <string>
using namespace std;
int main(){
    int mp=-1, nm, s=0;
    cin>>nm;
    while(nm!=mp){  
       if((nm%5 == 0) && (nm%7!=0)){
        s=s+nm;
       }
    cin>>nm;        
    }
    cout<<"\n"<<s;
    return 0;
}