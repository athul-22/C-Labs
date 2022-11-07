
//Check whether the Entered charecter is consonant or vowel

#include<stdio.h>

void main()
{
	printf("-----------------------------------------------------------------\n");
	printf("       Name : M.Akash    Reg No : 2260393                  \n ");
	printf("-----------------------------------------------------------------\n");
	
	char ch,check;
	printf("Enter the character\n");
	scanf("%c",&check);
	

if(check=='a' || check == 'A' || check=='e' || check =='E' || check == 'i' || check=='I' || check=='o' || check == 'O' || check=='u' || check=='U')
{
	ch = 'v';
}
else
{
	ch= 'c';
}
		
	switch(ch)
	{
		case 'v' : 
		printf("Vowel");
		break;
		case 'c' :
			printf("Consonant");
			break;
		default :
			printf("Invalid input");
			
		
	}
	
	
}