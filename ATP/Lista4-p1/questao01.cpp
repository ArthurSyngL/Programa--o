#include <iostream>
using namespace std;
int main(){
	float p1, p2, l1, l2, nf;
	cout<<"Digite suas notas da prova e das lista";
	cin>>p1>>p2;
	cin>>l1>>l2;
	nf=(p1+p2)*3 +(l1+l2)*2/10;
	cout<<"Sua nota e:"<<nf << std::endl;
	return 0;
	
}
