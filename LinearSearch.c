#include<stdio.h>
int main()
{
	int searched,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n] ;
	printf("Enter the Elements\n");
	for(int i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);
	}

	
	printf("Enter the element\n");
	scanf("%d",&searched);
	int flag = 1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==searched)
		{
			flag = 0;
		
//			break;
		}
		
		
		
	}
	if(flag==0)
	{
			printf("Element found!");
	}
	else
	{
		printf("Element Not found\n");
	}

}