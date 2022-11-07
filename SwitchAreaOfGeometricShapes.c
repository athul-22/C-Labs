
// Finding the area of circle,Triangle,Rectangle;
#include<stdio.h>
#define pi 3.14
int main()
{
	int choice,r,b,h,l;
	float cArea,tArea,rArea;
	printf("Enter 1 to find the area circle\n");
	printf("Enter 2 to find the area Triangle\n");
	printf("Enter 3 to find the area Rectangle\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			printf("Enter the area of the circle\n");
			scanf("%d",&r);
			cArea= pi*r*r;
			printf("The area of the circle is %f",cArea);
		break;
		case 2 :
			printf("Enter the breadth and height of the Triangle \n");
			scanf("%d %d",&b,&h);
			tArea = 0.5 * b*h;
			printf("The area of the Triangle is %f",tArea);
		break;
		
		case 3 :
			printf("Enter the length and breadth  of the Rectangle \n");
			scanf("%d %d",&l,&b);
			rArea = l*b;
			printf("The area of the Rectangle is %f",rArea);
		break;
		
		default :
			printf("Invalid Entry");
			
			
			
	}
	return 0;
}