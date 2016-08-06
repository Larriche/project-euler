public class Problem3
{
	public static void main(String[] args)
	{
		long number;
		long largest = 0;
		long quotient;

                number = 600851475143L;
                
                long i = 3;
                
		while((i * i) <= number){
			if((number % i) == 0){
				quotient = number / i;

				if(isPrime(i) && (i > largest)){
					largest = i;
					number /= i;
				}

			    if(isPrime(quotient) && quotient > largest){
			    	largest = quotient;
			    	number /= quotient;
			    }
			}

			i += 2;
		}

		System.out.println(largest);
	}

	public static boolean isPrime(long n)
	{
		if (n % 2 == 0)
			return true;

		if(n > 3){
			if(n % 2 == 0)
				return false;
		}

		long i = 3;

		while((i * i) <= n){
			if( n % i == 0)
				return false;

			i += 2;
		}

		return true;
	}
}