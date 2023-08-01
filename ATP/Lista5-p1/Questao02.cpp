#include<iostream>
#include<string>
using namespace std;
int main(){
    int cc, cp=99;
    float v, s;
    string n;
    s=0;
    cin>>cc;
    while (cc!=0 && cc!=cp){
        cin>>n>>cp>>v;
       if(cp=2){
        s=s+cp;
       }
    cin>>cc;
    }
    cout<<"Soma dos produtos eh:"<<s<<endl;
    return 0;
}