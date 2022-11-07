#include<stdio.h>

int main()
{
    printf("Enter the elements in the matrix 1\n");
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

 printf("Enter the elements in the matrix 2\n");
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
printf("MATRIX 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

printf("MATRIX 2\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d  ",m2[i][j]);
        }
        printf("\n");
    }


for(int a=0;a<3;a++)
{
    for(int b=0;b<3;b++)
    {
        for(int c=0;c<3;c++)
        {
                sum = sum + m1[a][c] * m2[c][b];
        }
        m3[a][b] = sum;
        sum = 0;
    }
}





printf("MATRIX 3\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d  ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;

}