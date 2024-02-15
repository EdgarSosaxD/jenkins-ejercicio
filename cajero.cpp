/* Hacer un prgrama que simule un cajero automático con un solo
saldo inicial de 1000 dólares.*/

#include <iostream>

using namespace std;

int main(){
	
	int saldo_inicial = 1000,opc = 0;
	float extra = 0;
	float saldo = (float)saldo_inicial;
	float retiro = 0;
	while(opc != 4){
	
	cout<<"\tBienvenido a su cajero Automatico Coppel"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Consultar saldo de la cuenta"<<endl;
	cout<<"4. Salir "<<endl;
	cout<<"opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout << "Digite cuanto va ingresar: ";
			cin>>extra;
			saldo = saldo + extra;
			cout << "Dinero en la cuenta: "<<saldo;break;
			
		case 2:
			cout<<"Cuanto dinero desea retirar: ";
			cin>>retiro;
			if (retiro > saldo_inicial){
				cout<<"No cuenta saldo suficiente para retirar";		
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Su saldo en su cuenta es de: "<<saldo;		
			}			
		case 3:
			cout<<"Su saldo en su cuenta es de: "<<saldo;break;	
		case 4: break;			
   }
	}
	return 0;
}
