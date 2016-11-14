/*
 * equisuma.c
 *
 *  Created on: 26 oct. 2016
 *      Author: Juanca
 */

int equisuma(int [] [] matriz, int i, int j, int tamano){
	int res;

	//Caso base: El 1 es potencia de cualquier número
	//Caso base: cualquier potencia de 2 es par, pero no cualquier numero par es potencia de 2
	if(tamano%2 != 0)
		res = -1;
	else if(tamano == 2)
		res = matriz[i][j] + matriz[i][j+1] + matriz[i+1][j] + matriz [i+1][j+1];
	else
		res = equisuma(matriz, i, j, tamano/2) + equisuma(matriz, i+2, j, tamano/2) + equisuma(matriz, i, j+2, tamano/2) + equisuma(matriz, i+2, j+2, tamano/2);

	return res;
}

int main(int argc, char **argv) {

}


//matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz [1][1]
