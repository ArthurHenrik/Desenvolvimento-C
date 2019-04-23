#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int base[5],potencia;
    for(int i=0;i<=5;i++){
        cin>>base[i];
    }
    
    // cin>>expoente;
    
    potencia = pow(base[3],2);

    cout<<potencia <<"\n";
}  