#include <iostream>
using namespace std;

int dia_de_nascimento(int d, int m, int a){
    int s = d;
    s = s + m*31;
    s = s + (a-1900)*365.25;
    return s;
}

int main(){
    int d, m, a, i;

    for(i =0; i <5; i++){
        cin>>d>>m>>a;
        cout<<dia_de_nascimento(d, m, a)<<endl;
    }
    return 0;
}
