#include <iostream>
using namespace std;
int main (void){
    int num;
    cout<<"Digite o numero de anos:";
    cin>>num;
    num = num*86400*365.25;
    cout<<"O numero de vezes que o coracao vai bater é:"<<num<<endl;
    return 0;
}