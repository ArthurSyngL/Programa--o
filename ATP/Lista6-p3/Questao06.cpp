#include <iostream>
using namespace std;

float menor(float a, float b){
    if(a<b)
        return a;
    return b;
}
float menor3(float a, float b, float c){
    return menor(menor(a,b), c);
}
int menorC(float a, float b, float c){
    if(menor3(a, b, c)==c)
        return 1;
    return 0;
}

int leituratrios(int n){
    int i, q = 0;
    float a, b, c;
    for(i = 0; i<n; i++){
        cin>>a>>b>>c;
        if(menorC(a, b, c))
            q++;
    }
    return q;
}

int main(){
    int n;
    cin>>n;
    cout<<leituratrios(n);
    return 0;
}
