#include<stdio.h>

int main()
{
    int num1,num2,gcd,lcm;
    printf("Enter the num1 and num2\n");
    scanf("%d %d",&num1,&num2);
    
  if(num1==0 || num2==0)
        {
            printf("Num1 or Num2 should not be 0\n");
            // break;
            
        }

else{
    for(int i=1;i<=num1 && i<=num2;i++)
    {
      
       if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }

    }
    printf("The GCD for the entered values is %d\n",gcd);
lcm = (num1*num2)/gcd;

printf("The LCM is %d\n",lcm);
}





}