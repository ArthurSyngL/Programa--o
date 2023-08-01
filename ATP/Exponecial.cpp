#include <iostream>
using namespace std;

int potencial(int n, int exp){
    int pot = n , i;
    for(i = exp - 1 ; i>=1; i-- ){
        cout<<pot<<"*"<<n<<endl;
        pot = pot * n;
    }
    return pot;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<< potencial(n1, n2);
    return 0;
}