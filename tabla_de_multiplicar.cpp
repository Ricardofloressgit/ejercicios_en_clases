/*Titulo :ejercicio en clases	
Autor : Ricardo flores soruco
Descripcion: Tabla de multiplicar
Fecha: 2024-01-17
				ANALISIS
DEFINICION DEL PROBLEMA : crear un programa que muestre la tabla de multiplicar la cual
el usuario ingresara que tabla desea generar.

DATOS DE ENTRADA : se ingresara la tabla que desee visualizar el usuario y se almacenara en
la variable numero como int-

INFORMACION DE SALIDA : se imprimira en pantalla la tabla generada escogida por el usuario

VARIABLES : Se hara uso de las siguientes variables de tipo int o entero, numero,i,resultado

					DISEÑO
Se devidira el problemas en pequeños problemas para resolver paso a paso
-se declaran variables de tipo int las cuales funcionaran como almacenamiento del numero agregado por el usuario, como contador, como resultado
-se mostrara en pantalla que el usuario ingrese la tabla que desea visualizar, la cual se guardara en la variable numero
-se mostrara en pantalla la tabla de multiplicar que se genero
-se hara uso del ciclo repetitivo for en la cual se utilizara la variable "i" como un contador la cual iniciara de 1 hasta 10 e ira aumentando de 1 en 1
-la variable resultado sera aquel resultado que se va a ir multiplicando por el valor ingresado por el usuario
-para finalizar se imprimira en pantalla la tabla de multiplicar generada en columnas.
*/
#include <iostream>
using namespace std;

int main() 
{
	int numero,i,resultado;
	
	// El usuario ingresara la tabla que desea visualizar 
	cout << "Ingrese la tabla que desea visualizar ";
	cin >> numero;
	
	// Con el numero ingresado se generara la tabla de multiplicar
	cout << "Tabla de multiplicar del " << numero << ":" << endl;
	/* For = ciclo repetitivo 
		i  = funciona como contador la cual en cada vuelta que de en el ciclo aumentara de 1 en 1 
		la cual empezara de 1 hasta 10 y se aumetaran en cada ciclo mas 1 por ende se muestra i++
		
	*/
	for (i = 1; i <= 10; i++)//ciclo repetitivo for/ se puede usar ; para separar en argumento  
	{ 
		resultado = numero * i;// esta linea es el resultado de la multiplicacion la cual se multiplicara de acuerdo al numero ingresado por el usuario
		cout << numero << " x " << i << " = " << resultado << endl;
	}
	
	return 0;
}

