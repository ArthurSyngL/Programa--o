#include <iostream>
using namespace std; 

int main (){
	int idade, ano;
	cout<<"Digite sua idade:"<<endl;
	cin>>idade;
	ano = 2022 - idade;
	cout<<"Seu ano de nasc eh:"<<ano<<endl;
		if(idade>=18) {
			cout<<"Maior de idade\n";
		} else{
			cout<<"Menor de idade\n";
		}
	return 0;
}

