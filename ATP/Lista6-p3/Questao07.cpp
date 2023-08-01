#include <iostream>
using namespace std;

int duracao(int h_inicio, int m_inicio, int h_fim, int m_fim){
    return (h_fim-h_inicio)*60 +(m_fim - m_inicio);
}

int main(){
    int i, hi, mi, hf, mf, d;
    for(i=0; i < 4; i++){
        cin>>hi>>mi>>hf>>mf;
        d = duracao(hi, mi, hf, mf);
        cout<<d<<endl;
    }

    return 0;
}
