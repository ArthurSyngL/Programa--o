#include <iostream>
using namespace std;
int main(){
    int a, b, c, i, qa=0;
    for (i = 0; i < 3; i++){
        cin>>a>>b>>c;
        if (a%(b+c)==0){
            qa=qa+1;
        }
        
    }
    cout<<qa<<endl;
    return 0;
}