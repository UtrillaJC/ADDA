public class InvierteCadena {
	
	public String iC (String cadena){
		return iCSubCentral (cadena, 0, cadena.length());
	}
	
	private String iCSubCentral (String cadena, int i, int j){
		String ret;
	
		if (i == j)
			ret = "";
		else if (i == j - 1)
			ret = cadena.substring(i, i + 1);
		else
			ret = cadena.substring(j - 1, j).concat(iCSubCentral(cadena, i + 1, j - 1)).concat(cadena.substring(i, i+1));
		
		return ret;
	}
	

	public static void main(String[] args) {
		InvierteCadena iCad = new InvierteCadena();
		System.out.println(iCad.iC("hola"));
		System.out.println(iCad.iC("movil"));
	}
	
}
