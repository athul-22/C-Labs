#include<stdio.h>
#include<string.h>

void compare();
int main()
{
    

    int n,digit,e=10;
    char str1[10],str2[10];

    do
    {
        printf("press 1 - compare, 2-concatenate, 3-length  of the string  \n");
        printf("Enter your choice \n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
        printf("Enter the first string = \n");
        scanf("%s",&str1);
        printf("Enter the Second string = \n");
        scanf("%s",&str2);
        compare(str1,str2);

        break;
        
        case 2:
        printf("Enter first string =  \n");
        scanf("%s",&str1);
        printf("Enter second string =  \n");
        scanf("%s",&str2);
        concat(str1,str2);
        break;

        case 3:
        printf("Enter String =  \n");
        scanf("%s",&str1);
        length(str1);
        default:
        break;
        }
printf("Enter  0\n");
scanf("%d",&e);
    } while (e==0);

    return 0;
}




void compare(char str1[],char str2[])
{
    int i = strcmp(str1,str2);
    if (i==0)
    {
       printf("String are equal\n");
    }
    else
    {
        printf("Strings are not equal \n");
    }
    
}

void concat(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("Concatenate string = %s\n",str1);
   
}

void length(char str1[])
{
    int len = strlen(str1);
    printf("The length of string = %d \n",len);
}

