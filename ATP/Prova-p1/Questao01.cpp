#include <iostream>
#include <string>
using namespace std;
int main(){
    float ca=0, mgd=0;
    string n;
    int d=0, mdp=0; 
    cin>>ca>>n>>d;
    while (d<1000){
        
            mgd=ca;
        if(mgd>ca){
            mgd=0;
        }else{
            mgd=ca;
        }
        mdp=d;
        if(mdp<d){
            mdp=d;
        }
    cin>>ca>>n>>d;
    }
    cout<<"\nA maior distancia percorrida foi de"<<mdp<<endl;
    cout<<"\nO menor gasto durante a viagem foi de"<<mgd<<endl;
    return 0;
}