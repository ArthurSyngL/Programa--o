#include <iostream>
using namespace std;
int main(){
	int qa;
	float sma, sl,sl5;
	cout<<"digite os dados";
	cin>>sma>>qa>>sl;
	if(qa>5){
		cout<<"Informe seu salario há 5 anos";
		cin>>sl5;
		}else if(sl5>sl){
				cout<<"houve acrescimo";
				}else{
					cout<<"não houve acrescimo";			
				}
					if(sl>sma){
						cout<<"ganha mais";
					}else{
						cout<<"ganha menos";
					}
	return 0;
}

