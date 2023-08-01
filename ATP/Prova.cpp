#include <iostream>
using namespace std;

int main(){
	int i;
	float nota, media, soma;
	cout<< "Digite sua nota:\n";
	for(i=0; 1<=7; i=i+1){
		//LEIA nota
		cin>>nota;
		soma<soma+nota;
		cout<<"\nSoma:"<< soma<< std:: endl;
		cout<<"nNota:"<< nota<< std::endl;
		cout<< "i"<< i<<endl;
	}
	media=soma/3; 
	if(media>7)
 		cout<<"Havera Festa!";
 		else
 			cout<<"N�o Haver� Festa!";
 			return 0;
}

