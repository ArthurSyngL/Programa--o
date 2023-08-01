#include <iostream>
#include <string>
using namespace std;

float nf(float n1, float n2, float n3, float p1, float p2, float p3){
    return (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
}

int main(){
    float p1, p2, p3;
    cin>>p1>>p2>>p3;
    float n1, n2, n3;
    int i;
    for (i=0; i<5; i++){
        cin>>n1>>n2>>n3;
        cout<<nf(n1, n2, n3, p1, p2, p3);
    }
    return 0;
}
