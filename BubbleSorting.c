#include<stdio.h>

int main()
{

int temp,e;
printf("Enter the numeber of elements\n");
scanf("%d",&e);
int arr[e];
printf("Enter the elements\n");

for(int i=0;i<e;i++)
{
	scanf("%d",&arr[i]);
}

for(int i=0;i<e-1;i++)
{
	for(int j=0;j<e-1;j++)
	{
			if(arr[j]>arr[j+1])
			{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
			}

	}
}

printf("After bubble sorting\n");
for(int i=0;i<e;i++)
{
	printf("%d\n",arr[i]);
}


return 0;
}
