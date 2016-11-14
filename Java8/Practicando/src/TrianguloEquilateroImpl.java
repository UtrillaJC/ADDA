
public class TrianguloEquilateroImpl {
	public int cuentaTriangulosUnidad (int lado){
		int ret;
		
		if (lado == 1)
			ret = 1;
		else
			ret = cuentaTriangulosUnidad(lado - 1) + (2 * lado) - 1;
		
		return ret;
	}
	
	public static void main(String[] args) {
		TrianguloEquilateroImpl tri = new TrianguloEquilateroImpl();
		
		System.out.println(tri.cuentaTriangulosUnidad(3));
	}
}
