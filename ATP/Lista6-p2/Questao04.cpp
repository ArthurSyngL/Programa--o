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
    int dia_n, mes_n, ano_n;
    cin>>dia_atual>>mes_atual>>ano_atual;
    if(data_valida(dia_atual, mes_atual, ano_atual)){
        cin>>dia_n>>mes_n>>ano_n;
        while(data_valida(dia_n, mes_n, ano_n)){
                cout<<idade(dia_n, mes_n, ano_n, dia_atual, mes_atual, ano_atual)<<endl;
                cin>>dia_n>>mes_n>>ano_n;
        }
    }
    return 0;
}
