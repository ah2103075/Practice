//Leaf year c programming
/*#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year = ");
    scanf("%d",&year);
    if(year%400==0 ||(year%4==0 && year%100!=0))
    printf("Leaf year");
    else
    printf("Not leaf year");
return 0;    
}*/
//Multiplication table
/*#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter any positive number = ");
    scanf("%d",&num);
    for(i=1; i<=10; i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    return 0;

}*/
#include<stdio.h>
int n;
int fibonacci(int first,int second)
{
   static  int i=1,fibo;
    if(i==n)
    return (0);
    else 
    {
        fibo=first+second;
        first=second;
        second=fibo;
        printf("%d ",fibo);
        i++;
        fibonacci(first,second);
    }
}
int main()
{
    int first=0, second=1;
    printf("Enter the last number of fibonacci series = ");
    scanf("%d",&n);
    printf("The fibonacci series are :\n");
    printf("1 ");
    fibonacci(first,second);
}
