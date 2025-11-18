#include <iostream>
using namespace std;


void ingresarDatos(double arreglo[],int tamano){
	for(int i=0;i<tamano;i++){
		cout<<"Ingrese el precio "<<i+1<<": $";
		cin>>arreglo[i];
	}
}
void encontrarMayorMenor(double arreglo[],int tamano,double &mayor,double &menor){
	mayor=arreglo[0];
	menor=arreglo[0];
	
	for(int i=0;i<tamano;i++){
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
		if(arreglo[i]<menor){
			menor=arreglo[i];
		}
	}
}
void mostrarDatosProgramador(){
	cout<<"\n==== Datos ===="<<endl;
	cout<<"Nombre: Kevin Chillagana"<<endl;
	cout<<"Edad:19 anios"<<endl;
	cout<<"Telefono: 0987925725"<<endl;
}
void calcularDescuento(){
	double precio;
	double descuento=0.10;
	string nombre;
	
	cout<<"\nIngrese el nombre del producto:";
	cin>>nombre;
	cout<<"Ingrese el precio del producto: $";
	cin>>precio;
	if(precio>1000){
		precio=precio-(precio*descuento);	
	}else{
		cout<<"Descuento no aplicado"<<endl;
	}
	cout<<"El precio final es $"<<precio; 
		
}
int main() {
	double precio[8];
	double mayor, menor;
	
	ingresarDatos(precio,8);
	
	encontrarMayorMenor(precio,8,mayor,menor);
	cout<<"El numero mayor es: $"<<mayor<<endl;
	cout<<"El numero menor es: $"<<menor<<endl;
	
	mostrarDatosProgramador();
	
	calcularDescuento();

	return 0;
}
