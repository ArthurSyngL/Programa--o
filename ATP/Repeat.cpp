#include <iostream>
using namespace std;

int main(){
	int ano, idade, i;
	for(i=1;i<=3;i=i+1){
		cout<<"digite sua idade:"<<endl;
		cin>>idade;
		ano = 2022 - idade;
		cout<<"Seu ano de nasc e:"<<ano<<endl;
		if(idade>=18){
			cout<<"Maior de idade\n";
		}else{
			cout<<"Menor de idade\n";
		}
	}
	return 0;
}
