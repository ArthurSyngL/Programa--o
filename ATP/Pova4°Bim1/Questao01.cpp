#include <iostream>
using namespace std;
float imc(float peso, float altura){
	float imc;
	imc=peso/altura*altura;
	return imc;
}

int main(){
	int id, idpv = -1;
	float p, a, pv;
	cin>>id;
	while(id<100){
		cin>>p>>a;
		pv=imc(p,a);
			if(idpv<id){
				idpv = id;
				pv=imc(p,a);
			}
		cout<<imc<<endl;
		cin>>id;
	}
		cout<<"Imc da pessoa mais velha"<<p<<endl;
	return 0;
}
