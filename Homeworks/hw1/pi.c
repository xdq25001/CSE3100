#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;

	printf("n = ");
	scanf("%d", &n);

	double pi = 0.;
	//TODO
	//add code below 
	double factor = 1.00;


	for(i=0; i<=n; i++)
	{
		double term = (4.0 / (8 * i + 1)
            - 2.0 / (8 * i + 4)
            - 1.0 / (8 * i + 5)
            - 1.0 / (8 * i + 6));

		pi += term * factor; 
    	factor /= 16.0;  

	}
	

	printf("PI = %.10f\n", pi);
	return 0;
}