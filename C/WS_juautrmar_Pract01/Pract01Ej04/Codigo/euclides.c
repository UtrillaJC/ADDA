#include <stdio.h>
#include <stdlib.h>

int mcdFinal (int, int);
int mcdIterativa (int, int);

// Método principal
int main()
{
	int a, b, r, opcion;

	// Escojemos el algoritmo a ejecutar
	printf("Algoritmos disponibles:\n");
	printf("   1. Algoritmo recursivo no final \n");
	printf("   2. Algoritmo recursivo final\n");
	printf("Escoja el tipo de algoritmo que desea ejecutar: ");

	fflush(stdout);
	scanf("%d", &opcion);

	if(opcion >= 1 && opcion <= 2){
		printf("Podemos usar los valores entre parenteisis como caso de prueba para verificar su correcto funcionamiento.\n\n");

		printf("Introduzca el primer numero (273): ");
		fflush(stdout);
	    scanf("%d", &a);

	    printf("Introduzca el segundo numero (2366): ");
		fflush(stdout);
	    scanf("%d", &b);

	    // Mostramos los resultados
		switch (opcion) {
			case 1:						// Opción recursiva no final
			    r = mcdFinal(a, b);
			    printf("El máximo común divisor en el algoritmo recursivo final es (91): %d",r);
				break;
			case 2:						// Opción iterativa
			    r = mcdIterativa(a, b);
			    printf("El máximo común divisor en el algoritmo iterativo es (91): %d",r);
				break;
		}

    return 0;
	}
}

int mcdFinal (int a, int b){
	int ret;

	if (b == 0)            			// Caso base (En este ejercicio, solo hay uno)
		ret = a;
	else if (a < b)					// Caso recursivo (1)
			ret = mcdFinal(b,a);
	else							// Caso recursivo (2)
		ret = mcdFinal(b,a%b);

	return ret;
}

int mcdIterativa (int a, int b){
	int temp;						// Variable temporal necesaria debido a que la asignación
									// paralela no existe en C
	while (b != 0){					// Consejo 1: si nos encontramos con más de un caso recursivo, tendremos que
									//            distinguir dentro del algoritmo recursivo cada caso (con un if).
		temp = a;
		a = b;

		if(a < b)
			b = temp;
		else
			b = temp%b;
	}

	return a;
}
