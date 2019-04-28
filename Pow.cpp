#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int base[4],potencia;
    
    for(int i=0;i<=4;i++){
        cin>>base[i];
    }
    
    potencia = pow(base[3],2);

    base[3]=potencia;


    for(int i=0;i<=4;i++){
        cout<<base[i]<<"\n";
    }
}  