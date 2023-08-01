#include <iostream>
#include <string>
using namespace std;
int main(){
    string nome;
    int idade, anoatual=2022;
    std::cin>>nome>>idade;
    cout<< "Bem vindo:"<<nome<<"\nSua idade:"<<idade;
    int ano=anoatual-idade;
    cout<< "\nAno que nasc:"<<ano;
    if(ano>2004){
         cout<<"\nMenor";
            }else{cout<<"\nMaior";
                 }    
    return 0;
}