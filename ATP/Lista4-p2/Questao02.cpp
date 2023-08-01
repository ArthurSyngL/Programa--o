#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    float pa, pd;
    for(i=0;i<200;i=i+1){
        cout<<"Digite o valor dos precos dos produtos\n";
        cin>>pa>>pd;
            if(pa<pd){
                cout<<"Compraria\n";
                }else{
                    cout<<"Nao compraria\n";
                }
    }
    return 0;
}