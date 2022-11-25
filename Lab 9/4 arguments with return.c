
#include<stdio.h>


int Factorial(int  );


int main()
{

	
int num,r,ncr;
printf("Enter a number\n");
scanf("%d",&num);

int factorialN = Factorial(num);

printf("Enter the value of r\n");
scanf("%d",&r);

int factorialR = Factorial(r);

int nr = Factorial(num-r);

if(num>r)
{
	ncr = ((factorialN)/(factorialR*nr));
	printf("nCr = %d",ncr);
}
else
{
	printf("r value should not be greater than num\n");
}

}

int Factorial(int n ) 
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f = f*i;
	}
	return f;
	
}


