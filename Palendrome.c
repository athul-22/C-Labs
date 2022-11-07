#include<stdio.h>
int main()
{
		printf("-----------------------------------------------------------------\n");
	printf("       Name : M.Akash    Reg No : 2260393                  \n ");
	printf("-----------------------------------------------------------------\n");
	
	int num,rem,result=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	int original = num;
	
	while(num!=0)
	{
			rem = num%10;
		result = result *10 + rem;
		num = num/10;
	}
	if(num==original)
	{
	printf("Result = %d and its a palindrome ",result);
	}
	
	else
	{
		printf("Not a palindrome");
	}
}