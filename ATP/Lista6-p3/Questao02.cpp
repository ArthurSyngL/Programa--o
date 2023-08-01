#include <iostream>
using namespace std;

float v_cubo(float l){
    return l * l * l;
}

float v_caixa(float a, float h){
    return a*h;
}

int main(){
    float l, a, h;
    cin>>l>>a>>h;
    if(v_cubo(l)>v_caixa(a, h))
        cout<<"Cubo";
    else cout<<"Caixa";
    return 0;
}
