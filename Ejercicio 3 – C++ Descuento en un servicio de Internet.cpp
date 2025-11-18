#include <iostream>
using namespace std;

double calcularDescuento(double precio,double descuento){
	return precio*(descuento/100);
}
double calcularTotalPagar(double precio,double descfidelidad,double descpromocinal){
	double porcfidelidad=calcularDescuento(precio,descfidelidad);
	double porcpromocional=calcularDescuento(precio,descpromocinal);
	
	return precio-(porcfidelidad+porcpromocional);
}



int main() {
	double precio,descfidelidad,descpromocinal;
	double total;
	cout<<"Ingrese el precio del producto: $";
	cin>>precio;
	cout<<"Ingrese el descuento por fidelidad:";
	cin>>descfidelidad;
	cout<<"Ingrese el descuento promocional:";
	cin>>descpromocinal;
	
	total=calcularTotalPagar(precio,descfidelidad,descpromocinal);
	
	cout<<"\nEl monto final a pagar es : $"<<total;
	return 0;
}
