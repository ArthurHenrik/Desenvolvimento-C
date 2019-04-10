# Desenvolvimento-C
Desenvolvimento
Brincadeira.cpp
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
Cubinhos.cpp
#include <iostream>

using namespace std;

int main (void){
    int x,y,z;
   cout<<"Digite a quantidade de pedaços de pizza...";
    cin >> x;
    cout<<"Digite outra ou a mesma quantidade de pedacos...";
    cin >> y;
    z=x + y;
    if(z>8){
        cout<<"Cubinhos é um monstro ,come mais de uma pizza\n";
    }
    else if(z == 8){
        cout<<"cubinhos é animal ,come uma pizza\n"; 
    }
    else{   
        cout<<"Cubinhos é gordo ,come menos que uma pizza\n";
    }
   
}
Media.cpp
#include <iostream>

using namespace std;

int main (void){
    int gordo[10];

    int i=0;
    
    for(int i=0;i<10; i++){
       cin>>gordo[i];
       
    }
    for(int i=0;i<10;i++){
         cout<<gordo[i]<<"\n";
         
    }
}
Teste.cpp
#include <iostream>

using namespace std;

int main (void){
    int x[2]; 
    //int v = 5;
    x[0] = 3;
    x[1] = 2;
    cout<< x[0]<<"\n";
    cout<< x[1]<<"\n";
}
HelloWorld.cpp
#include <stdio.h>

int main (void){
	for(int i =0 ; i < 10 ; i++){
		printf("Marginal\n");
	}
}
Exemplos.cpp
#include <iostream>

using namespace std;

int main (void){
   

