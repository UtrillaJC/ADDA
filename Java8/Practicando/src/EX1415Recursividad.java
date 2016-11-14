
public class EX1415Recursividad {/*
	public static int recMultiple (int n){
		int ret;
		
		if (n < 4)
			ret = 1;
		else
			ret = 3 * recMultiple(n - 1) - recMultiple(n - 2) + 2 * recMultiple(n - 4);
		
		return ret;
	}
	
	public static int iterativo (int n){
		int ret = 0;
		
		//En este caso tenemos 4 casos base, por lo que hay que crear 4 nuevas variables
		//  · iterativo(0) = iterativo(1) = iterativo(2) = iterativo(3) = 1
		int a = 1, b = 1, c = 1, d = 1;
		int aNuevo, bNuevo, cNuevo, dNuevo;
		
		while (n >= 4){
			ret = 3*a - b + 2*d;
					
			aNuevo = 
			bNuevo = 
			cNuevo =
			dNuevo =
			a = aNuevo;
			b = bNuevo;
			c = cNuevo;
			d = dNuevo;
		}
		
		return ret;
	}*/
}
