#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, q;
    string n, c;
    float p, vt;
    q=0;
    for(i=1;i<=10;i=i+1){
        cout<<"Digite a categoria dos produtos e Quantidade\n";
        cin>>c>>p>>q;
        vt=p*q;
        cout<<"O valor final e:"<<vt<<endl;
    }
    return 0;
}