#include <stdio.h>

/* Ejercicio 2 - Potencia recursiva
 *
 * Implemente el algoritmo recursivo de la potencia para números enteros. Para ello siga
 * los siguientes pasos (ver potencia.c y Soluciones.txt)
 */


int potenciaNoFinal(int, int);

// Método principal
int main() {
	//Variables:
	int base, exponente;
	int resultado;
	int opcion;

	// Escojemos el algoritmo a ejecutar
	printf("Algoritmos disponibles:\n");
	printf("   1. Algoritmo recursivo no final: \n");
	printf("   2. Algoritmo recursivo final\n");
	printf("   3. Algoritmo iterativo \n\n");
	printf("Escoja el tipo de algoritmo que desea ejecutar: ");

	fflush(stdout);
	scanf("%d", &opcion);

	if(opcion >= 1 && opcion <= 3){

		// Añadimos el parámetro base:
		printf("Introduzca la base: ");
		fflush(stdout);
		scanf("%d", &base);

		// Añadimos el parametro exponente:
		printf("Introduzca el exponente: ");
		fflush(stdout);
		scanf("%d", &exponente);
	}

	switch (opcion) {
		case 1:			// Opción recursiva no final
			resultado = potenciaNoFinal(base, exponente);
			printf("El resultado para la entrada %d^%d es %d", base, exponente, resultado);
			break;
		case 2:			// Opción recursiva final
			resultado = potenciaFinal(base, exponente, 1);
			printf("El resultado para la entrada %d^%d es %d", base, exponente, resultado);
			break;
		case 3:			// Opción iterativa
			resultado = potenciaIterativa(base, exponente, 1);
			printf("El resultado para la entrada %d^%d es %d", base, exponente, resultado);
			break;
		default:
			printf("No existe la opción que ha elegido\n");
			break;
	}

	return 0;
}

int potenciaNoFinal (int base, int exponente){
	int ret;

	if (exponente == 0)
		ret = 1;
	else
		ret = base * potenciaNoFinal(base, exponente - 1);

	return ret;
}

int potenciaFinal (int base, int exponente, int acumulador){
	int ret;

	if (exponente == 0)
		ret = acumulador;
	else
		ret = potenciaFinal(base, exponente - 1, acumulador * base);

	return ret;
}

int potenciaIterativa(int base, int exponente){
	int acumulador = 1;

	while(exponente > 0){
		exponente = exponente - 1;
		acumulador = acumulador * base;
	}

	return acumulador;
}
