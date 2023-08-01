#include <string>
#include <iostream>
using namespace std;
int main(){
    int i;
    string nome;
    float p1,p2,p3;
    for(i=1;i<=5;i=i+1){
    cout<<"\nDigite as infos";
    cin>>nome>>p1>>p2>>p3;
    if(p1<p2&&p1<p3){
        cout<<"mercado 1\n";
        }else{
            if(p2<p3){
                cout<<"mercado2\n";
                }else{
                    cout<<"mercado3\n";
                }
            }
    }  
    return 0;
}