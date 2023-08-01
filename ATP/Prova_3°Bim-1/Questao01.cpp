#include <iostream>
#include <string>
using namespace std;
int main(){
    float peso, p1, tx;
    tx=0,peso=0,p1=0;
    cin>>peso;
    p1=peso*39;
    tx=(p1/10);
    cout<<"taxa:"<<tx<<endl;
    cout<<"preco:"<<p1<<endl;
    return 0;
}