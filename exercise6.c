#include <stdio.h>
#include <math.h>

int main()
{
	long int squsum = 0;
	long int sumsqu = 0;

	for(int i = 0; i <= 100; i++)
	{
		squsum += i;
	        sumsqu += pow(i,2);

	}
         
        squsum = pow(squsum,2);
        
	printf("\n%ld\n",squsum-sumsqu);

        return 0;

}	
