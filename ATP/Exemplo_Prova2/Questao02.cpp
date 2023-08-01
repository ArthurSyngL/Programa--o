#include <iostream>
#include <string>
using namespace std;
int main(){
    string n; 
    char sexo;
    int id, c, mid=0, tf=0, tid=0;
    for(c=0; c<5; c=c+1){
        cin>>n>>id>>sexo;
        if(sexo = 'F'){
        tf=tf+1;
        tid=tid+id;
        }
    }
    mid=tid/tf;
    cout<<"A media de idade das pessoas com sexo"<<mid<<endl;
    return 0;
}