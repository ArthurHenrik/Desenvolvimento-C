#include <iostream>

using namespace std;

int main (void){
    int x,y,z;
    cout<<"Digite um numero para a variavel x...\n";
    cin >> x;
    cout<<"Digite um numero para a variavel y...\n";
    cin>>y;
    cout<<"Digite um numero para a variavel z...\n";
    cin>>z;
    if(z>x && z>y){
        cout<<"A variavel "<<z<<"(z) é maior que "<<x <<"(x) e " <<y <<"(y)\n";
    }
    else if(z==x && z==y && x==y){
        cout<<"todas as variaves sao iguais\n";
    }
    else if(x==y && z>x && z>y) {
        cout<<"A variavel "<<y<<"(y) e "<<x<<"(x) são iguais e a variavel "<< z<< "(z) é maior que a variavel x e y\n";
     }
    else{
        cout<<"não consegui calcular,tente novamente com outras variavess \n";
    }
}
