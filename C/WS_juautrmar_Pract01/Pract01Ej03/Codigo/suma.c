#include <stdio.h>
#include <stdlib.h>

int sumaNoFinal(int);
int sumaFinalSufija(int, int);
int sumaFinalPrefija(int, int);
int sumaIterativa(int);

// Conjunto de valores a sumar
int tabla[10] = {2, 1, 1, 1, 1, 1,1, 1, 1, 1};

// Constante que almacena el tamaño de la tabla
const int TAM = 10;

// Método principal
int main()
{	
	int opcion;

	// Escojemos el algoritmo a ejecutar
	printf("Algoritmos disponibles:\n");
	printf("   1. Algoritmo recursivo no final: \n");
	printf("   2. Algoritmo recursivo final (SumaFinalPrefija)\n");
	printf("   3. Algoritmo recursivo final (SumaFinalSufija)\n");
	printf("   4. Algoritmo iterativo \n\n");
	printf("Escoja el tipo de algoritmo que desea ejecutar: ");

	fflush(stdout);
	scanf("%d", &opcion);

	if(opcion >= 1 && opcion <= 4){
		switch (opcion) {
			case 1:			// Opción recursiva no final
				printf("El resultado para la tabla en el algoritmo SumaNoFinal es: %d\n", sumaNoFinal(TAM-1));
				break;
			case 2:
				printf("El resultado para la tabla en el algoritmo sumaFinalPrefija es: %d\n", sumaFinalPrefija(TAM-1, 0));
				break;
			case 3:
				printf("El resultado para la tabla en el algoritmo sumaFinalSufija es: %d\n", sumaFinalSufija(0, 0));
				break;
			case 4:
				printf("El resultado para la tabla en el algoritmo sumaIterativa es: %d\n", sumaIterativa(TAM-1));
				break;
		}
	}
    return 0;
}

int sumaNoFinal (int tamano){
	int ret;

	if (tamano == 0)            // Caso base
		ret = tabla[tamano];
	else						// Caso recursivo
		ret = tabla[tamano] + sumaNoFinal(tamano - 1);

	return ret;
}

int sumaFinalPrefija(int tamano, int acumulador){
	int ret;

	if(tamano == 0)				// Caso base
		ret = tabla[tamano] + acumulador;
	else						// Caso recursivo
		ret = sumaFinalPrefija(tamano - 1, acumulador + tabla[tamano]);

	return ret;
}

int sumaFinalSufija(int tamano, int acumulador){
	int ret;

	if(tamano == TAM - 1)		// Caso base
		ret = tabla[tamano] + acumulador;
	else						// Caso recursivo
		ret = sumaFinalSufija(tamano + 1, acumulador + tabla[tamano]);

	return ret;
}

int sumaIterativa (int tamano){
	int acumulador = 0;
	while (tamano > 0){
		acumulador	= acumulador + tabla[tamano];
		tamano = tamano - 1;
	}
	return acumulador + tabla[tamano];
}
