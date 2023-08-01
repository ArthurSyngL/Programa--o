#include <iostream>
#include <string>
using namespace std;
int main(){
    string np;
    float p, vt;
    int q;
    cout<<"\nDigite o nome do produto:";
    cin>>np;
    cout<<"Digite o preco e a quantidade";
    cin>>p>>q;
    vt=p*q;
    cout<<"O valor total da compra foi"<<vt;
    return 0;
}