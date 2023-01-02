#include<stdio.h>
int main()
{
    int a,b,num1,num2,tem,gcd,lcm;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    while(b!=0)
    {
        tem=a%b;
        a=b; 
        b=tem;
    }
    gcd=a;
    lcm=(num1*num2)/gcd;
    printf("Gcd=%d\n",gcd);
    printf("Lcm=%d\n",lcm);

return 0;    
}