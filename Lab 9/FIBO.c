#include<stdio.h>
int fib(int n);
int main()

{

    int n  ,f;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        f=fib(i);
    printf("%d ",f);
    }
    

    return 0;
}

int fib(int n)
{
    if(n<2)
    {
     return n;  
    }
    else
    {
        return (fib(n-1) + fib(n-2));//
    }
    
}