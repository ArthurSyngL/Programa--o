#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, materias;
    float pf, nota;
    string nome;
    materias=0;
    for(i=0; i<10; i=i+1){
        cout<<"Digite o nome\n";
        cin>>nome;
        cout<<"Digite a Nota\n";
        cin>>nota;
        cout<<"Digite o percentual de presenca\n";
        cin>>pf;
            if(pf>0.25 || nota<6){
                materias = materias + 1;
            }
                if(materias>=3){
                    cout<<"Retido\n";
                }else{
                    cout<<"Passou\n";
                }
                    
    }
    return 0;
}