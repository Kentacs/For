#include <iostream>
#include <string>
using namespace std;
int main ()
//hacer un programa en la que se ingrese n cantidad de numero , que finalize al llegar a 100 y acumule lo ingresado.
{
	
	int numero,acumular;
	acumular = 0;
	
	cout << "El programa acumulara los numero ingresados"<<endl;
	
	while (acumular<100)
	
	{
	
	cout << "Ingrese un numero"<<endl;
	cin  >> numero;
	
	acumular = acumular + numero;
	
    }
    
    cout << "Total de numero acumulados es de: "<<acumular;

	
	
	return 0;
}


