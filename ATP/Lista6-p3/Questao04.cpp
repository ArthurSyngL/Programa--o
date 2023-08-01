#include <iostream>
using namespace std;

int leitura(int n){
    float a, b;
    int i, q = 0;
    for(i = 0; i<n; i++){
        cin>>a>>b;
        if(a>b)
            q++;
    }
    return q;
}

int main(){
    int n;
    cin>>n;
    cout<<leitura(n);
    return 0;
}
