#include <iostream>
using namespace std;

void Menu(){
    cout<<"=== MENU CLARO EP ==="<<endl;
    cout<<"1.Telefonia Fija."<<endl;
    cout<<"2.TV Satelital."<<endl;
    cout<<"3.Internet Hogar."<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"Seleccione una opcion:";
}

double descuentoTerceraEdad(double precio, int edad){
    if(edad > 65){
        return precio * 0.50;
    } else {
        return 0;
    }
}

double costoInstalacion(int metodopago){
    double instalacion = 120.00;
    
    if(metodopago == 1){
        return instalacion - instalacion * 0.50;
    } else if(metodopago == 2){
        return instalacion - instalacion * 0.10;
    }
    return instalacion; 
}

int main() {

    double telefoniaFija = 7.99;
    double tvSatelital = 28.50;
    double internetHogar = 18.00;

    double iva = 0.15;
    double ice = 0.15;

    int edad, opcion;

    do{
        Menu();
        cin >> opcion;

        if(opcion == 4){
            cout<<"Saliendo del programa.....";
            break;
        }

        if(opcion < 1 || opcion > 4){
            cout<<"Opcion invalida";
            continue;
        }

        double precioBase = 0;
        string nombre;

        if(opcion == 1){
            precioBase = telefoniaFija;
            nombre = "Telefonia Fija";
        }
        else if(opcion == 2){
            precioBase = tvSatelital;
            nombre = "TV Satelital";
        }
        else {
            precioBase = internetHogar;
            nombre = "Internet Hogar";
        }


        cout << "Ingrese su edad: ";
        cin >> edad;

        double descuentoEdad = descuentoTerceraEdad(precioBase, edad);
        
        double montoIVA = precioBase * iva;
        double montoICE = 0;

        if(opcion == 2){
            montoICE = precioBase * ice;
        }


        double precioFinalMensual = (precioBase - descuentoEdad) + montoIVA + montoICE;

        int metodoPago;
        cout << "\nMetodo de pago instalacion:\n";
        cout << "1. Tarjeta \n";
        cout << "2. Efectivo \n";
        cout << "3. Otro\n";
        cout << "Seleccione: ";
        cin >> metodoPago;

        double instalacionFinal = costoInstalacion(metodoPago);

    
        cout << "\n===== RESUMEN DEL SERVICIO =====\n";
        cout << "Servicio: " << nombre << endl;
        cout << "Precio Base: $" << precioBase << endl;
        cout << "IVA : $" << montoIVA << endl;

        if(opcion == 2)
            cout << "ICE : $" << montoICE << endl;
        else
            cout << "ICE: No aplica\n";

        if(descuentoEdad > 0)
            cout << "Descuento tercera edad: $" << descuentoEdad << endl;
        else
            cout << "Descuento tercera edad: No aplica\n";

        cout << "Precio mensual final: $" << precioFinalMensual << endl;
        cout << "Instalacion final: $" << instalacionFinal << endl;

    }while(opcion != 4);

    return 0;
}

					
					
