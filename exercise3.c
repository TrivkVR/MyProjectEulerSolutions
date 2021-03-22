#include<stdio.h>
#include <math.h>

long int prime_checker(long int n)
{
	for(long int i =2; i<n/2;i++)
	{
		if(n % i == 0)
		return -1;
	}
       
        return n;
}

int main()
{
	long int prime = 0;
	long int x = 600851475143;
        long int t = 0;
	for(long int i = 3; i< sqrt(x) ;i= i + 2)
	{
	   t = prime_checker(i);	
           if(t != -1 & x % t == 0)
	   {
		   prime = t;
		   printf("\n %ld\n",prime);	   
	   }
             
	 
	}
	
	printf("\n %ld\n",prime);	  

        return 0;

}	
