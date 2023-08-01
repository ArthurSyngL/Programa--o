#include <iostream>
using namespace std;

float data_valida(int d, int m, int a){
    if(d<1 || m<1 || m>12 || a<1)
        return 0;
    if(m==1 || m==3||m==5||m==7||m==8||m==10||m==12)
        if (d<32)
            return 1;
        else return 0;
    if(m==2)
        if(d<30)
            return 1;
        else return 0;
    if (d<31)
        return 1;
    else return 0;
}

int idade(int d, int m, int a, int da, int ma, int aa){
    int idade = aa-a;
    if(m>ma)
        idade = idade - 1;
    if(m==ma && d>da)
        idade = idade - 1;
    return idade;
}

int main(){
    int i, dia_atual, mes_atual, ano_atual;
    int dia_n, mes_n, ano_n, id;
    int q_facultativo = 0, q_obrigatorio = 0, q_nao = 0;
    cin>>dia_atual>>mes_atual>>ano_atual;
    for(i = 0; i <5; i++){
        cin>>dia_n>>mes_n>>ano_n;
        id=idade(dia_n, mes_n, ano_n, dia_atual, mes_atual, ano_atual);
        if(id<16)
            q_nao++;
        else if(id>18 && id<60)
                q_obrigatorio++;
             else q_facultativo++;
    }
    cout<<q_nao<<" "<<q_facultativo<<" "<<q_obrigatorio;
    return 0;
}
