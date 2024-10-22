#include <iostream>
using namespace std;
int main(){
    int n;
    string nom;
    int edad;
    int ano;
    int born;
    int suma;
cout<<"Digite 1. para ingresar su nombre\n 2. para ingresar su edad \n 3.Ingrese el año actual \n 4.Ingrese el año de nacimiento \n 5.Edad futura";
    while(n!=5){
cin >>n;
    if (n==1){
        cout<<"Ingrese su nombre"<<endl;
        cin>>nom;
    }
    
    else if(n==2){
        cout<<"Ingrese su edad\n";
        cin>>edad;
    }
    else if(n==3){
        cout<<"Ingrese el año actual\n";
        cin>>ano;
    }
    else if(n==4){
        cout<<"Ingrese su año de nacimiento\n";
        cin>>born;
    }
    else if (n==5){
        suma=ano-born+10;
        cout<<"Su edad en 10 años sería"<<suma<<endl;

    }
    }
    cout<<"Querido usuario del programa su nombre es: "<<nom<<endl;
    cout<<" ";
    cout<<"Su edad actual es: "<<edad<<endl;
    cout<<" ";
    cout<<"Año actual"<<ano<<endl;
    cout<<"edad futura:"<<suma<<endl;
    cout<<"Se finalizo el programa, gracias.\n";
    return 0;
    }
