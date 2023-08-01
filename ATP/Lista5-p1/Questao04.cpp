#include<iostream>
#include<string>
using namespace std;
int main (){
    int c=5;
    float peso, m, d;  m=0;
    cin>>c;
        while(c!=5){
        cin>>peso;
            if(c=1){
                m=m+peso;
                d=d+1;
            }
        cin>>c;    
        }
    m=m/d;
    cout<<m;
    return 0;
}