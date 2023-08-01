#include <iostream>
using namespace std;
int main(){
	int qa,i;
	float sma, sl,sl5;
	for(i=-4;i<=0;i=i+1){
		cout<<"\ndigite os dados";
		cin>>sma>>qa>>sl;
			if(qa>5){
		cout<<"\nInforme seu salario há 5 anos";
		cin>>sl5;
		}else if(sl5>sl){
				cout<<"\nhouve acrescimo";
				}else{
					cout<<"\nnão houve acrescimo";			
				}
					if(sl>sma){
						cout<<"\nganha mais";
					}else{
						cout<<"\nganha menos";
					}
	}	
	return 0;
}