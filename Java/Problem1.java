
public class Problem1
{
	public static void main(String[] args)
	{
		int sumOfNums = 0;

		for(int i = 1;i < 1000;i++){
			if( (i % 3 == 0) || (i % 5) == 0){
				sumOfNums += i;
			}
		}

		System.out.println(sumOfNums);
	}
}