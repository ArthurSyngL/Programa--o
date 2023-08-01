#include <iostream>
using namespace std;

float soma(float a, float b){
    return a+b;
}

float multiplicacao(float a, float b){
    return a*b;
}

float subtracao(float a, float b){
    return a-b;
}

float divisao(float a, float b){
    return a/b;
}

float operacao_com_switch(float a, float b, char c){
    switch (c){
        case '+': return soma(a, b);
        break;
        case '-': return subtracao(a, b);
        break;
        case '/': return divisao(a, b);
        default: case '*': return multiplicacao(a, b);
    }

}

float operacao(float a, float b, char c){
    if(c=='+')
        return soma(a, b);
    else if(c == '-')
        return subtracao(a, b);
        else if (c=='/')
            return divisao(a, b);
    return multiplicacao(a, b);
}

int main(){
    float x, y;
    char op;
    cin>>x>>y>>op;
    cout<< operacao_com_switch(x, y, op)<<endl;
    cout<< operacao(x, y, op)<<endl;
    return 0;
}
