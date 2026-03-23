#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	//TODO
	//add code below
	int rem;
	int sum; 
	
	while (sum != 1 && sum != 4)
	{
		sum = 0;
		while (n > 0)
		{
			rem = n%10;
			sum = sum + (rem*rem);
			n = n/10;
		} 
	n = sum;
	printf ("%d\n", n);
	};
	
	if(n==1) printf("%d is a happy number.\n", m);
	else printf("%d is NOT a happy number.\n", m);

	return 0;
}