#include <stdio.h>

int division(int , int , int *);

int main()
{
  
    int r ;
    int a,b,s;

    printf("Introduzca el primer numero: ");
	fflush(stdout);
    scanf("%d", &a);
    printf("Introduzca el segundo numero: ");
	fflush(stdout);
    scanf("%d", &b);

	s = 0;
    r = division(a, b, &s);
    printf("Resto: %d, Resultado: %d\n", r, s);
	
	return 0;
}
