#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    char op;
    float n, n1, r;
    cin>>n>>op>>n1;
    if(op=='*'){
        r=n*n1;
    }
	else if(op=='-'){
        r=n-n1;
    }
	else if (op=='/'){
        r=n/n1;
    }
	else if(op=='+'){
        r=n+n1;
    }
    cout<< "Resutado"<<r<<endl;
    return 0;
}