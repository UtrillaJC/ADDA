#include <stdio.h>

int fibMultiple(int);

// Método principal
int main() {

	int r;
	int n=3;

	printf("Introduzca el numero de fibonacci que quiere calcular: ");
	//fflush(stdout);
	//scanf("%d", &n);
	//r = fibMultiple(n);

	//printf("El numero de fibonacci %d es el %d\n", n, fibMultiple(n));
	printf("El numero de fibonacci %d es el %d\n", n, fibIterativo(n));

	return 0;
}

int fibMultiple(int n) {
	int ret;

	if (n == 0)					// Caso base (1)
		ret = 0;
	else if (n == 1)
		ret = 1;
	else									// Caso recursivo
		ret = fibMultiple(n - 1) + fibMultiple(n - 2);

	return ret;
}




int fibIterativo(int n) {
	int i = 0, iNueva;						// Inicializamos el contador en 0
	int a = 1, aNueva;						// Inicializamos el caso base a
	int b = 0, bNueva;						// Inicializamos el caso base b

	while (i < n) {							// Siempre que no sea el caso base
		iNueva = i + 1;						// Incrementamos el contador en 1
		int temp;
		aNueva = a + b;                     // aNueva = aAntigua + bAntigua
		bNueva = a;                         // bNueva = aAntigua

		i = iNueva;
		a = aNueva;
		b = bNueva;
	}
	return b;
}
