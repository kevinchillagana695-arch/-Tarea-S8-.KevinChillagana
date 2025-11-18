#include <iostream>
using namespace std;;

int main() {
	int numeros[5];
	bool llenado=false;
	int opcion;
	
	do{
		cout<<"=== MENU ==="<<endl;
		cout<<"1. Llenar el arreglo"<<endl;
		cout<<"2. Sumar los elementos del arreglo"<<endl;
		cout<<"3. Modificar una posicion"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Elija una opcion:";
		cin>>opcion;
        switch (opcion) {
			case 1:
				cout<<"\nLlenar el arreglo"<<endl;
				
				for(int i=0;i<5;i++){
					cout<<"Ingrese el numero "<<i+1<<":";
					cin>>numeros[i];	
				}
				llenado=true;
				cout<<"Elementos del arreglo corectamente ingresados.\n"<<endl;
				break;
			case 2:
				cout<<"Sumar los elementos del arreglo"<<endl;
				if(llenado==true){
					int suma=0;
					for(int i=0;i<5;i++){
						suma+=numeros[i];	
					}
					cout<<"La suma de los numeros es :"<<suma<<"\n"<<endl;	
				}else{
			        cout<<"Numeros no ingresados-ingrese los numeros para continuar...";
				}break;
				
			case 3:
				cout<<"Modificar una posicion"<<endl;
				
				if(llenado==true){
					int numeromod;
					int posicion;
					cout<<"Ingrese la posicion a modificar(0 a 4):";
					cin>>posicion;
						
					if(posicion>=0 && posicion<5){
						cout<<"Arreglo previamente registado"<<endl;
						for(int i=0;i<5;i++){
							cout<<numeros[i]<<" ";
						}
						cout<< "\nIngrese el numero a modificar:"<<endl;
						cin>>numeromod;
						numeros[posicion]=numeromod;

						cout<<"Arreglo modificado"<<endl;
						for(int i=0;i<5;i++){
							cout<<numeros[i]<<" ";
						}
						cout<<"\n"<<endl;
					}
					else{
						cout<<"Ingrese una posicion valida del arreglo."<<endl;
					}break;
										
				}else{
					cout<<"Numeros no ingresados-ingrese los numeros para continuar..."<<endl;
				}break;
				
				
			case 4:
				cout<<"Saliendo del programa....";
				//TODO
				break;
						
			default:
				cout<<"Selecione una opcion valida";
				break;
		}
	}while(opcion!=4);
	return 0;
}
