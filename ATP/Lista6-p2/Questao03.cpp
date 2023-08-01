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
int main(){
    int i, dia, mes, ano, q = 0;
    for (i=0; i<10; i++){
        cin>>dia>>mes>>ano;
        if(data_valida(dia, mes, ano))
            q++;
    }
    cout<<q<<endl;
    return 0;
}
