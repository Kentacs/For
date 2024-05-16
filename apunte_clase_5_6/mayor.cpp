#include <iostream>
#include <string>
using namespace std;
int main()

//Desarrollar un programa que solicite al usuario ingresar tres números enteros y que
//imprima el mayor de los tres.

{
	//tipos de datos que utilice fue INT de numero enteros 
	int a =0,b =0,mayor,c =0;
	
	
	cout <<"ingrese un numero"<<endl;//es la forma de imprimar por pantalla que ingrese un numero, es decir el mensaje 
	                                 //que va a ver el usuario.
	cin  >>a;//es la forma para que el procesador guarde el dato que ingreso el usuario.
	
	cout <<"ingrese otro numero"<<endl,
	cin  >>b;
	
	cout <<"ingrese el ultimo numero"<<endl;
	cin  >>c;
	
	
	//preguntamos si a es mayor a b por el primer condicional simple:
	if ( a > b )//<- es la forma de preguntar de Si (if) es un numero mayor a otro numero.
    {
	   //En la primera condicion del flujo del verdadera, dentro preguntamos nuevamente una condicion mas,
	   //preguntando por el ultimo numero si es mayor al primer numero ingresado.
	   if ( a > c )//preguntamos si (if) el primero es mayor al ultimo numero.
	   {
	   mayor = a;//guardamos el variable mayor el numero mas grande y asi con los demas variables que nosotros creamos.
	   }else//por el falso se iria o preguntaria si el el ultimo numero es mayor al primer numero ingresado.
	   {
	   mayor = c;
	   }
    } else//esta falso va por si el segundo numero ingresado es mayor al ultimo numero ingresado.
    {
   	   if ( b  > c )//pregunta si (if) el segundo numero ingresado es mayor al ultimo
   	   {
   	   mayor =b;	
	   }else// por falso quiere decir el ultimo es mayor al primer , y seundo numero ingresado.
	   {
	 	mayor =c;
	   }
   	
	}
	
	cout <<"el mayor es "<<mayor;
}
