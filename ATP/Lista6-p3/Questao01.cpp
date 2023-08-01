#include <iostream>
using namespace std;

int primo(int x){
    int i;
    for(i=2; i<x; i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int i, x, q = 0;
    for (i=0; i<6; i++){
        cin>>x;
        if(primo(x))
            q++;
    }
    cout<<q<<" numeros primos";
    return 0;
}
