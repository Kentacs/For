#include <iostream>
#include <string>
using namespace std;
int main()

//Hacer un programa donde ingresara dos numero enteros y luego ingresar 1 si deesea multiplicar los numero ingresados
//2 sumar, 3 dividir y 4 restar

{
	int numero1,numero2,suma,resta,dividir,multiplicar,seleccionado;
	
	numero1 = 0;
	numero2 = 0;
	
	cout<<"Ingrese un numero "<<endl;
	cin >>numero1;
	
	cout<<"Ingrese otro numero "<<endl;
	cin >>numero2;
	
	cout<<"Presione 1 si desea sumar los numero ingresados"<<endl;
	cout<<"Presione 2 si desea restar los numero ingresados"<<endl;
	cout<<"Presione 3 si desea dividir los numero ingresados"<<endl;
	cout<<"Presione 4 si desea multiplicar los numero ingresador"<<endl;
	cout<<"Presione 5 si desea salir"<<endl;
	
	cin >>seleccionado;
	
	switch (seleccionado)
	{
		case 1:
			suma= numero1 + numero2;
			cout<<"El resultado de la suma es: "<<suma;
			
		break;
		case 2:
			resta= numero1 - numero2;
			cout<<"El resultado de la resta es: "<<resta;
		break;
		case 3:
		    dividir= numero1 / numero2;
			cout<<"El resultado de la division es: "<<dividir;
		break;
		case 4:
		    multiplicar= numero1 * numero2;
			cout<<"El resultado de la multiplicación es: "<<multiplicar;
		break;
		case 5:
			return 0;
		break;
		default:
			cout<<"opcion incorrecta";
		break;
    }
}
