#include <iostream>

using namespace std;


void modifica(int & x){ // x nu mai e o copie a lui numarul2, e chiar  numarul2
    x = 1000;
}

int main(){
    
    for(int i=0; i<10; i++){
        cout <<"KEKBOSS"<<endl;
    }
    
    int numar = 10;
    cout <<"Numarul este: " << numar <<  " " << &numar << endl;
    
    cout <<"==============================="<<endl;
    int numarul2 = 300;
    modifica(numarul2);  // modifica(300); // aici e o copie
    
    
    
    cout <<"Dupa modificare: " << numarul2 << endl;
    
    
}