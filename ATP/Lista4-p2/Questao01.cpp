#include <iostream>
#include <string>
using namespace std;
int main (){
	int t,i,soma;
	float vf;
	soma=0;
	for(i=1;i<=20;i=i+1){
		cout<<" digite a velocidade eo tempo gasto\n";
		cin>>t>>vf;
		soma=soma+(vf*t);
		cout<<" quantidade de km percorridos\n"<<soma;
	}
	return 0;
}
