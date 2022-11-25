#include<stdio.h>

void swap(int *,int *);

int main()
{
    int n1,n2;
    printf("Enter n1 and n2 \n");
    scanf("%d %d",&n1,&n2);
    printf("The value of n1 and n2 Before swapping : %d %d \n",n1,n2);
    swap(&n1,&n2);
    // swap(n1,n2);

    printf("The value of n1 and n2 After  swapping : %d %d \n",n1,n2);

    return 0;
}

void swap(int* n1,int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}