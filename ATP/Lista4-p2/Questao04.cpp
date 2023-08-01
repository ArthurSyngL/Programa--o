#include <iostream>
#include <string>
using namespace std;
int main(){
	int q1, q2, cod, i;
	float s1, s2, nt, m1, m2;
	string nome;
	s1=0;s2=0;q1=0;q2=0;
	for(i=0;i<100;i=i+1){
		cout<<"Digite seu nome, codigo, nota?\n";
		cin>>nome>>cod>>nt;
			if(cod==1){
				s1=s1+nt;
				q1=q1+1;
			}else{
				s2=s2+nt;
				q2=q2+1;
			}//fim do else
	}//fim para
	m1=s1/q1;
	m2=s2/q2;
	cout<<"As medias sao:\n"<<m1<<m2;
	return 0;
}
