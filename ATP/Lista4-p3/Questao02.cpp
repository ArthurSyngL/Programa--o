#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, numero;
    for(i=0;i<=15;i=i+1){
    cout<<"Digite o numero";
    cin>>numero;
        if((numero%5 == 0) && (numero%3!=0)){
            cout<<"ouro";
                }else if((numero%2 == 0) && (numero%2 == 3)){
                cout<<"Prata";
                    }else if( numero%2!=0){
                    cout<<"Bronze";
                        }else{
                                cout<<"sem medalha";
                            }
                            cout<<"\n";
    }
    return 0;
}