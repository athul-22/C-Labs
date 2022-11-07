#include<stdio.h>
int main()
{
	printf("-----------------------------------------------------------------\n");
	printf("       Name : M.Akash    Reg No : 2260393                  \n ");
	printf("-----------------------------------------------------------------\n");
	
	int num,check=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			check++;
		}
	}
	
	if(check==2)
	{
		printf("Prime Number\n");
	}
	else
	{
		printf("Not a Prime Number\n");
	}
	
	
	return 0;
}