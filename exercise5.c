#include<stdio.h>

int main()
{
	int nums[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int ans = 0;
	int f = 0;

	for(int i = 40; ;i = i + 20)
	{
           f = 1;

           for(int j = 0; j < 20; j++)
	   {
		   if(i % nums[j] !=0)
		   {
			   f = 0;
			   break;
		   }
             
	   }

	   if(f == 1)
	   {
		   ans = i;
		   break;
	   }
	}
       
	printf("\n%d\n",ans);

	return 0;
      
}
          	   
