#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int base[5],potencia;
    for(int i=0;i<=5;i++){
        cin>>base[i];
    }
    
    potencia = pow(base[3],2);
    
    for(int i=0;i<=2;i++){
        cout<<base[i] <<"\n";

    }
    cout<<potencia<<"\n";
    
    for(int i=4;i<=5;i++){
        cout<<base[i]<<"\n";
    }
    

}  