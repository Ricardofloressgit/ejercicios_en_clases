/*Titulo :ejercicio en clases	
Autor : Ricardo flores soruco
Descripcion: Generador de numeros aleatorios
Fecha: 2024-01-17
					ANALISIS
DEFINICION DEL PROBLEMA : crear un programa que muestre numeros aleatorios en la cual se pueda elegir
la cantidad de numeros que se desea generar

DATOS DE ENTRADA : se ingresara la cantidad de numeros que se desee generar 

INFORMACION DE SALIDA : se imprimira en pantalla los numeros al azar generados 

VARIABLES : Se hara uso de las siguientes variables de tipo int o entero cantidadNumeros,numeroAleatorio.

					DISEÑO	

Se devidira el problemas en pequeños problemas para resolver paso a paso

- se hara uso de las librerias #include <stdlib.h>,#include <time.h> las cuales son necesarias para generar numeros aleatorios

-se declaran variables de tipo int las cuales funcionaran como almacenamiento del numero agregado por el usuario, como contador, como resultado

-se mostrara en pantalla que el usuario ingrese la cantidad de numeros que desea generar al azar, la cual se guardara en la variable cantidadNumeros

-se hara uso de srand(time(0));la cual genera numeros al azar en tiempo real//es decir que cambiaran cada vez que se empiece a correr el programa

-se hara uso del ciclo repetitivo for en la cual se utilizara la variable "i" como un contador la cual iniciara de 0 hasta la variable cantidadNumeros

-la variable numeroAleatorio seran los datos aleatorios almacenados en dicha variable

-para finalizar se imprimira en pantalla los numeros aleatorios generados 
*/
#include <iostream>
#include <stdlib.h>  // Necesario para la función rand()
#include <time.h>    // Necesario para la función time()

using namespace std;

int main() {
	/* La función srand establece el punto de partida para generar una serie de enteros pseudoaleatorios en el subproceso actual
	   time(0) proporciona un valor que cambia con el tiempo, asegurando que la secuencia de números aleatorios sea diferente en cada ejecución del programa.
	*/
	srand(time(0));
	
	int cantidadNumeros,numeroAleatorio,i;//variable en la que se almacena la cantidad de numeros que se generaran
	
	// Solicitar al usuario cuántos números aleatorios desea generar
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	cin >> cantidadNumeros;
	
	/* la variable numeroAleatorio: se inicializa con un valor obtenido mediante la función rand(),
	que genera un número aleatorio, y se utiliza el operador % para limitar el rango a valores entre 0 y 99.
	rand : recupera los números pseudaleatorios que se generan. Si se llama a rand antes de hacer ninguna llamada a srand
	se genera la misma secuencia que si se llama a srand con seed con el valor 1--> es decir que los valores ya generados
	por la primera inicializacion pueden volver a repetirse cada vez que corra el programa. 
	*/
	cout << "Numeros aleatorios generados:" << endl;
	for (i = 0; i < cantidadNumeros; i++) 
	{
		numeroAleatorio = rand() % 100;  
		cout << numeroAleatorio << " ";
	}
	
	cout << endl;
	
	return 0;
}

