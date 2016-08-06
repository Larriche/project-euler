public class Problem2
{
	public static void main(String[] args)
	{
		int sumEven = 0;

		int x = 1;
		int y = 1;
		int z = 2;

		while z <= 4000000{
			sumEven += z  // z always contains even numbers that are part of sequence

			// moving x,y and z to their next values based on the definition of 
			// fibonacci numbers
			x = y + z;
			y = z + x;
			z = x + y;
		}

		System.out.println(sumEven);
	}
}