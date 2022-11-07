#include<stdio.h>
int main()
{
		printf("-----------------------------------------------------------------\n");
	printf("       Name : M.Akash    Reg No : 2260393                  \n ");
	printf("-----------------------------------------------------------------\n");
	
	int check,num,i;
	for(num=1;num<=100;num++)
	{
		check=0;//if i asign check value out of loop then value of check always 0
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				check++;
			}
			
		}
		if(check==2)
			{
				printf("%d\n",num);
			}
	}
	printf("%d = check",check);
}