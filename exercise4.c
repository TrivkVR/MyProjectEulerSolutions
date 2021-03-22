#include<stdio.h>

int pal_checker(int n)
{
	int t1 = n/100000;
	int n1 = n%100000;
        
	int t2 = n1/10000;
        n1 = n1%10000;

	int t3 = n1/1000;
        n1 = n1%1000;
	
        int t4 = n1/100;
        n1 = n1%100;

        int t5 = n1/10;
	int t6 = n1%10;
	
        // printf("\n%d\n%d\n%d\n%d\n%d\n%d\n",t1,t2,t3,t4,t5,t6);
	
	if(t1 == t6 & t2 == t5 & t3 == t4)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	
}
int main()
{
	
	int p = 0;
	int ans = 0;
        int t = 0;
	for(int i = 900;i<1000;i++)
	{
		for(int j =900;j<1000;j++)
		{
			t = i*j;

			if(pal_checker(t) == 1)
			{
				ans = t;
			}
		}
	}

	printf("\n%d\n",ans);

	
	return 0;
}
