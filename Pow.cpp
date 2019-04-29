#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int base[4];
    
    for(int i=0;i<=4;i++){
        cin>>base[i];
    }
    
    base[2] = pow(base[2],2);

    // base[3]=potencia;


    for(int i=0;i<=4;i++){
        cout<<base[i]<<"\n";
    }
}  