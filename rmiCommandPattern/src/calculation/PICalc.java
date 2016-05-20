package calculation;

public class PICalc implements Calculation {

	private double result;

	@Override
	public void calculate() {
		result = PICalc.exp(1000,100);
		// TODO Auto-generated method stub
		
	}

	@Override
	public void getResult() {

		System.out.println("Euler´s Number: "+result);
		// TODO Auto-generated method stub
		
	}


	/*
	https://www.tutorials.de/threads/eulersche-zahl.300478/
	 */

	public static double exp(double x, int iterations) {
		double result = 1.0;
		double xpow = 1.0;
		double fac = 1.0;

		for (int i = 1; i <= iterations; ++i) {
			xpow *= x;
			fac *= i;
			result += xpow/fac;
		}

		return result;
	}
}
