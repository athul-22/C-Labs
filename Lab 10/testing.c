#include<stdio.h>
#include<string.h>
int main()
{
char str1[];
char str2[];

    printf("Enter the First String \n");
scanf("%s",str1[]);
printf("Enter the Second String \n");
scanf("%s",str1[]);

printf("To lower case : %s \n",strlwr(str1));
printf("To Upper case : %s \n",strlwr(str2));

printf("String 2 copied to string 2 and i.e. : %s \n",strcpy(str1,str2));
printf("The length of the first String is %d and the Length of the second String is %d \n",strlen(str1),strlen(str2));


    return 0;
}