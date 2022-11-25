
#include<stdio.h>


void Factorial(int,int );
int main()
{

	
int num,r;
printf("Enter a number\n");
scanf("%d",&num);
printf("Enter the value of r\n");
scanf("%d",&r);

if(num>r)
{
	Factorial(num,r);	
}
else
{
	printf("r value should not be greater than num\n");
}

}

void Factorial(int num,int r )
{
	int i,nr=num-r,ncr,fN=1,fR=1,fNR=1;
	for(i=1;i<=num;i++)
	{
		fN = fN*i;
	}
	for(i=1;i<=r;i++)
	{
		fR = fR*i;
	}
		for(i=1;i<=nr;i++)
	{
		fNR = fNR*i;
	}
	
	ncr = (fN/((fR)*(fNR)));

	printf("nCr = %d",ncr);

	
}


