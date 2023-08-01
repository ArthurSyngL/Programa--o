#include <iostream>
using namespace std;

float media1(float n1, float n2){
    if(n1>n2)
        return n1;
    return n2;
}
float media2(float n1, float n2){
    return (n1*2 + n2*3)/5;
}

int main(){
    float n1, n2, m1, m2;
    int i;
    for (i=0; i<10; i++){
        cin>>n1>>n2;
        m1 = media1(n1, n2);
        m2 = media2(n1, n2);
        cout<<m1<<endl;
        cout<<m2<<endl;
    }
    return 0;
}
