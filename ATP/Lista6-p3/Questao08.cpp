#include <iostream>
using namespace std;

int duracao(int h_inicio, int m_inicio, int h_fim, int m_fim){
    return (h_fim-h_inicio)*60 +(m_fim - m_inicio);
}

int main(){
    int i, hi, mi, hf, mf, d, maior_duracao=-1, jogo, jogo_maior_duracao;
    for(i=0; i < 10; i++){
        cin>>jogo>>hi>>mi>>hf>>mf;
        d = duracao(hi, mi, hf, mf);
        if(d>maior_duracao){
            maior_duracao = d;
            jogo_maior_duracao=jogo;
        }
    }
    cout<<jogo_maior_duracao<<endl;
    return 0;
}
