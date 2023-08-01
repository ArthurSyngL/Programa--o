#include <iostream>
#include <string>
using namespace std;

int dia_de_nascimento(int d, int m, int a){
    int s = d;
    s = s + m*31;
    s = s + (a-1900)*365.25;
    return s;
}

int main(){
    int d, m, a, i, dia_inicial, menor_dia_inicial = 10000000;
    string nome;
    float peso, peso_mais_velho;
    for(i =0; i <5; i++){
        cin>>nome>>d>>m>>a>>peso;
        dia_inicial = dia_de_nascimento(d, m, a);
        if(dia_inicial<menor_dia_inicial){
            menor_dia_inicial = dia_inicial;
            peso_mais_velho = peso;
        }
    }
    cout<<peso_mais_velho;
    return 0;
}
