import java.lang.Math;

public class Sming {
	
	public static int recNoFinal(int a, int b, int [] v){
		int ret;
		
		if (a >= b)
			ret = 0;
		else 
			ret = recNoFinal(a + 1, b - 2, v ) + Math.min(v[a], v[b-1]);
		
		return ret; 
	}
	
	//min es lo qu hace que sea recursivo no final
	// el objetivo es que esa suma se haga a medida que avanzamos, de tal forma que 
	// nos llevamos a la llamada recursiva Math.min(v[a], v[b-1])
	//return recFinalAux(0, v.length, v, 0);
	public static int recFinal (int a, int b, int [] v, int acumulador){
		int ret;
		
		if (a >= b)
			ret = acumulador;
		else{
			acumulador = acumulador + Math.min(v[a], v[b-1]);
			ret = recFinal(a+1, b-2, v, acumulador);
		}
		
		
		return ret;
	}
	
	public static int iterativo (int a, int b, int [] v){
		int r = 0;								// E x = i(p): Variable i de tipo contador que siempre empieza en 0
		
		int aNuevo, bNuevo;
		
		while (a < b){ 							// while(!b(x)): Mientras no sea caso base
			r = r + Math.min(v[a], v[b-1]);   	// En la sol. recFinal esta línea es el acumulador.
			aNuevo = a + 1;
			bNuevo = b - 2;
			a = aNuevo;
			b = bNuevo;
			
		}
			
		return r;
	}
}
