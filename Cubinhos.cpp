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
