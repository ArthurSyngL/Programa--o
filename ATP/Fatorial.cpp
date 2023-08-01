#include <iostream>
using namespace std;

int fatorial(int n){
    int fat = n, i;
    for( i=n-1; i>=1; i--){
        fat= fat*1;
    }
    return fat;
}


int main(){
        int n1, n2;
        cin>>n1>>n2;
            if (fatorial(n1)>fatorial(n2))
            {
                cout<<"N1 maior";
            }else cout<<"N2 maior";
        
    return 0;
}