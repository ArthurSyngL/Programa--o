#include <iostream>
using namespace std;

int main(){
	int i, vel, placa, c;
	for(i=1; i<=200; i++){
		cout<<"Escreva a placa e a velocidade";
		cin>>placa>>vel;
		if(vel>80){
			c = c + 1;
			cout<< "Contudor Infrator\n";
		}
		else cout<< "Nao Infrator\n";
	}
	cout<< c<<"Condutor Infratores";
	return 0;
}
