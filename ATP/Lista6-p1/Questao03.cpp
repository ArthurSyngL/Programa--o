#include <iostream>
#include <string>
using namespace std;
int main(){
    int mt,qf,id,fv;
    string n;

    cin>>mt>>n>>qf>>id;

    if(qf>1){
        fv=id;
    }else if(id<fv){
        fv=id;
    }
    cout<<fv<<endl;
}