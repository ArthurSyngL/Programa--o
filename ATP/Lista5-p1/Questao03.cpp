#include<iostream>
#include<string>
using namespace std;
int main(){
    int id, idm=0;
    cin>>id>>idm;
    while(id<0 && id>200){
        if (idm>id){
            idm=id;
        }
    cin>>id;
    }
    cout<<idm<<"anos"<<endl;
    return 0;
}