#include <stdio.h>

int repeticiones(int , int);

int main()
{
    int n, k;
    int r;
	  
    printf("Introduzca los elementos (16): ");
	fflush(stdout);
    scanf("%d", &n);
    printf("Introduzca los grupos (3): ");
	fflush(stdout);
    scanf("%d", &k);
    
    r = repeticiones(n, k);
    printf("El resultado para la entrada %d (16) ^%d (3) es %d (560)",n, k,r);
	
    return 0;
}
