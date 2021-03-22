#include<stdio.h>
#include <math.h>

int prime_checker(long int n)
{
	for(long int i = 2; i < n/2 ; i++)
	{
		if(n % i == 0)
		return -1;
		
	}
       
        return 1;
}

int main()
{
	long int prime = 0;
	int count = 2;
	long int t = 0;
	
	for(long int i = 5; count <= 10000 ; i = i + 2)
	{
	   t = prime_checker(i);	
           if(t == 1)
	   {
                  ++count;
		  prime = i; 
		  
	          	  
	   }
             
	 
	}
	
	printf("\n%ld\n",prime);	  
        return 0;

}	
