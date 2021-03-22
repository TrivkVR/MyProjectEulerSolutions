#include<stdio.h>

int main()
{
	int f = 1;
	int s = 1;
        int sum = 0;

        printf("\n%d",s);	
	for(int i = 1 ; s <= 4000000  ;i++)
	{
		
	   s += f;
           f = s - f;

	   if(s % 2 == 0)
	   {
		   sum+= s;
	   }

	}

	printf("\nFinal answer is : %d \n",sum);

	return 0;

}
