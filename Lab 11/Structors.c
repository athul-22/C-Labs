#include<stdio.h>

struct StudentDetails
{
    char name[13];
    int RegNo;
    char Sec;
}SD[5];

int main()
{
for (int i = 0; i < 5; i++)
{
    printf("STUDENT %d \n",i+1);
   printf("Enter the name of the Student\n");
   scanf("%s",SD[i].name);
   printf("Enter the Registor Number of %s\n",SD[i].name);
   scanf("%d",&SD[i].RegNo);
   printf("Enter the Sec \n");
   scanf(" %c",&SD[i].Sec);

    
}

for (int i = 0; i < 5; i++)
{
      printf("STUDENT %d \n",i+1);
   printf("Name of the Student : %s\n",SD[i].name);
   
   printf("Registor Number     : %d\n",SD[i].RegNo);
  
   printf("section             :  %c\n",SD[i].Sec);
   
}

    return 0;
}
