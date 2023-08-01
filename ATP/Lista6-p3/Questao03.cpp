#include <iostream>
using namespace std;

int potencia(float X, float Z){
    int i, pot = 1;
    for(i = 0; i<Z; i++){
        pot = pot * X;
    }
    return pot;
}

int main(){
    float x1, x2, z1, z2;
    cin>>x1>>x2>>z1>>z2;
    if(potencia(x1, z1)>potencia(x2, z2))
        cout<<"Potencia 1";
    else cout<<"Potencia 2";
    return 0;
}
