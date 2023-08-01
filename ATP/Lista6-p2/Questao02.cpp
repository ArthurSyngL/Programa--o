#include <iostream>
using namespace std;

float media1(float n1, float n2){
    if(n1>n2)
        return n1;
    return n2;
}
float media2(float n1, float n2){
    return (n1*2 + n2*3)/5;
}
float mediaf(float n1, float n2){
    if(n1>7.5 && n2>7.5)
        return media1(n1, n2);
    return media2(n1, n2);
}


int main(){
    float n1, n2, nf, maior = -1;
    int i;
    for (i=0; i<5; i++){
        cin>>n1>>n2;
        nf = mediaf(n1, n2);
        if(nf>maior)
            maior = nf;
    }
    cout<<maior<<endl;
    return 0;
}
