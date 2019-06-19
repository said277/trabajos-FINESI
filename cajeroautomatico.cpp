/*crear una clase llamada cajero automatico*/
/*los siguientes metodos: ingresar(), retirar(),  y pedir saldo(), ademas el saldo del cliente se le da un interes mensual del 45%*/
#include<iostream>
#include<stdlib.h>

float D; // esta variable almacenada en dinero de la cuenta
using namespace std;

class  Cuenta{ //el nombre de la clase
	
    private:  //el encapsulamiento para los metodos sera privado
        string Titular;
        float C;
        
    public: //el encapculamiento sera publico
        Cuenta(string,float); //constructor con parametros
        void ingresar();
        void retirar();
        void pedirsaldo();
};
// constructor
Cuenta::Cuenta(string _Titular,float _C){
	Titular=_Titular;
	C=_C;
}
void Cuenta::ingresar(){
	float C1=0;
	cout<<" Titular: "<<Titular<<endl;
	C=D;
	cout<<" saldo actual: "<<C<<endl;
	cout<<" Cuanto dinero vas a depositar: "<<endl;
	cin>>C1;
	C=C+C1;
	D=C;
	cout<<" Nuevo saldo: "<<C<<endl;
	cout<<"\n"<<endl;
}
void Cuenta::pedirsaldo(){
	cout<<" Titular: "<<Titular<<endl;
	cout<<D<<endl;
	cout<<"\n"<<endl;
}
void Cuenta::retirar(){
	float C1=0;
	
	    C=D;
	    
	    cout<<"Titular: "<<endl;
	    cout<<" saldo actual: "<<C<<endl;
	    cout<<" Cuanto deseas retirar: "<<endl;
	    cin>>C1;
	    if(C1<(D*.96)){
	    C=C-C1;
	    }
	    else
	    {
	    	cout<<" la cantidad ingresada es mayor al total de su cuenta."<<endl;
	    	cout<<" Se cobra un interes mensual del 4% por lo tanto la cuenta no puede estar vacia. "<<endl;
	    }
	    
	    D=C;
	    cout<<" Nuevo saldo: "<<endl;
	    cout<<"\n"<<endl;
}
//PROGRAMA PRINCIPAL
int main ()
{
	
	int b=0,a;
	int op;
	string T;
	
	//PEDIMOS AL USUARIO QUE INGRESE EL NOMBRE DEL TITULAR Y LA CANTIDAD DE APERTURA DE CUENTA
	cout<<" BIENVENIDO "<<endl;
	cout<<" Ingrese el nombre del titular de cuenta: "<<endl;
	cin>>T;
	cout<<" Con cuanto dinero desea abrir su cuenta: "<<endl;
	cin>>D;
	
	
	do{
		system ("cls");
	cout <<" **********MENU PRINCIPAL********* "<<"\n"<<" 1-Ingresar dinero a la cuenta"<<"\n"<<"2-retirar efectivo "<<"\n"<<"3-consulta de saldo"<<endl;
 Cuenta CC(T,D); //OBJETO CREADO EN EL PROGRAMA PRICIPAL

 cout<<" Que operacion desea realizar "<<endl;
    cin>>b;
switch(b){
case 1: cout<<" Ingresar."<<endl;
        CC.ingresar();
break;

case 2: cout<<" Retirar. "<<endl;
        CC.retirar();
break;        
        
case 3: cout<<" Consutar saldo."<<endl;
        CC.pedirsaldo();
break;  
}
cout<<" Si deseas realizar otra operacion, por favor ingrese otro numero diferente de 0."<<endl;
cin>>op;
    cout<<"\n"<<endl;
}while(op !=b);
int dia=29;
dia++; //CONTADOR
if(dia==30){
	D=(D*.96);
	cout<<" Se  ha llegado al plazo de 30 dias, por lo tanto se le cobrara el 4% del total de su cuenta."<<endl;
	cout<<" Su nuevo saldo es de: "<<D<<endl;
}
    system("pause");
}

