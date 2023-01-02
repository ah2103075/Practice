//Write a program in C to calculate the number of factorial using recurtion
#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter any positive number : ");
    scanf("%d",&n);
    printf("Factorial of a number %d is : %d ",n,fact(n));
}
/*#include<stdio.h>
int  fun(int n)
{
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}
int main( )
{
    int n=3;
    printf(" Result =%d ",fun(n));
   return 0;
}*/
/*#include<stdio.h>
int  fun(int n)
{
    if(n==0)
        return 1;
    else
        return 7+fun(n-2);
}
int main( ) 
{ 
  printf(" Result =%d ",fun(4));
   return 0;
}*/
/*Write a program to print numbers from 1 to 10 in such a way that when number is
odd, add 1 and when number is even , add 1 */

/*#include<stdio.h>
void odd();
void even();
int n=1;

void odd()
{
    if(n<=10)
    {
        printf(" %d",n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n<=10)
    {
        printf(" %d",n-1);
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
}*/
//Tail Recursion
/*#include<stdio.h>
void fun(int n)
{
    if(n==0)
       return;
    else
       printf("%d ",n);
       return fun(n-1);

}
int main()
{
    fun(3);
    return 0;
}*/
//Non-Tail Recursion
/*#include<stdio.h>
void fun(int n)
{
    if(n==0)
       return;
    else   
    fun(n-1);
    printf("%d ",n);
         
}
int main()
{
    fun(3);
    return 0;
}*/
/*#include<stdio.h>
int fun(int n)
{
    if(n==1)
       return 0;
    else   
   return 1+fun(n/2);
         
}
int main()
{
   printf("%d",fun(8));
   return 0;
}*/
/*#include<stdio.h>
int fun(int n)
{
    int x=1,k;
    if(n==1) return x;
    for(k=1; k<n; k++)  
    x=x+fun(k)*fun(n-k);
   return x;
         
}
int main()
{
   printf("Ans=%d",fun(5));
   return 0;
}*/
/*#include<stdio.h>
void count(int n)
{
    static int d=1;
    printf("% d",n);
    printf("% d",d);
    d++;
    if(n>1) 
    count(n-1);
    printf(" %d",d);
}
int main()
{
   count(3);
}*/
//Write a program in C to print first 50 natural numbers using recursion
/*#include<stdio.h>
int numprint(int n)
{
    if(n<=50)
    printf(" %d",n);
    numprint(n+1);
    
}
int main()
{
    int n=1;
    printf("The numbers are :\n");
    numprint(n);
}*/
// Write a program in C to calculate the sum of numbers from 1 to n
/*#include<stdio.h>
int fun (int n1) 
{
   int x;
    if (n1 == 1)
    return (1);
    else 
    x = n1 + fun(n1-1); 
   return (x);
}
int main() 
{
   int n1,sum;
   printf(" Enter the last number of range = ");
   scanf("%d", &n1);
 
   sum = fun(n1); 
   printf(" The sum of numbers from 1 to %d = %d\n", n1, sum);
   return 0;
}*/
// Write a program in C to Print Fibonacci Series using recursion
/*#include<stdio.h>
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
}*/
//Write a program in C to print the array elements using recursion
/*#include <stdio.h>
#define size 100
void ArrayElement(int arr1[], int st, int l)
{
    if(st >= l)
        return;  
    printf("%d  ", arr1[st]);
    ArrayElement(arr1, st+1, l);
}
int main()
{
    int arr1[size];
    int n, i;
	printf(" Enter the number  elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
	      printf(" element [%d] = ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf(" The elements in the array are : ");
    ArrayElement(arr1, 0, n);
    return 0;
}*/
//Write a program in C to find the sum of digits of a number using recursion
/*#include<stdio.h>
int noOfDigits(int n1)
{
    static int count=0;
     if(n1!=0)
     {
          count++;
         noOfDigits(n1/10);
    }
    return count;
}
int main()
{
  int n1,count;
    printf(" Enter  a number : ");
    scanf("%d",&n1);
    count = noOfDigits(n1);
    printf(" The number of digits in the number is :  %d \n\n",count);
    return 0;
}*/
//Write a program in C to get the largest element of an array using recursion
/*#include<stdio.h>
int n;
int MaxElem(int arr1[])
{
    static int i=0, max =-9999;
    while(i < n)
    {
         if(max<arr1[i])
           max=arr1[i];
      i++;
      MaxElem(arr1); 
    }
    return max;
}
int main()
{
    int arr1[100],max,i;
      printf(" Enter the number of elements = ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
	      printf(" element -[%d] : ",i);
	      scanf("%d",&arr1[i]);
	    }	
    max=MaxElem(arr1);
    printf(" Largest element of the array is: %d\n",max);
    return 0;
}*/
//Write a program in C to reverse a string using recursion
/*#include<stdio.h>
#define size 100
char *ReverseOfString(char str1[])
{
    static int i=0;
    static char revstr[size];
    if(*str1)
    {
         ReverseOfString(str1+1);
         revstr[i++] = *str1;
    }
    return revstr;
}
int main()
{
    char str1[size],*revstr;
    printf(" Input any string: ");
    gets(str1);

    revstr = ReverseOfString(str1);
    printf(" The reversed string is: %s\n",revstr);
    return 0;
}*/
//Write a program in C to reverse a string using recursion
/*#include<stdio.h>
int i=0;
void ReverseOfString(char str1[])
{
    if(str1[i]!='\0')
    ReverseOfString(str1+1);
    printf("%c",str1[i]);
}
int main()
{
    char str1[50];
    printf(" Input any string: ");
    gets(str1);
    ReverseOfString(str1);
}*/
//Write a program in C to check a number is a prime number or not using recursion.
/*#include<stdio.h>
int i;
int checkForPrime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i-1; 
         checkForPrime(n1);
      }
}
int main()
{

    int n1,primeNo;
    printf(" Input any positive number : ");
    scanf("%d",&n1);
    i = n1/2;
    primeNo = checkForPrime(n1);
    if(primeNo==1)
        printf(" The number %d is a prime number.",n1);
    else
      printf(" The number %d is not a prime number.",n1);
    return 0;
}*/
//Write a program in C to find GCD of two numbers using recursion
/*#include<stdio.h>
int check(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return check(a-b,b);
          else
             return check(a,b-a);
     }
     return a;
}
int main()
{
    int num1,num2,gcd;
    printf(" Enter two  numbers = ");
    scanf("%d %d",&num1,&num2);
    gcd = check(num1,num2);
    printf(" The GCD of %d and %d is = %d",num1,num2,gcd);
    return 0;
}*/
//Write a program in C to find the LCM of two numbers using recursion.
/*#include<stdio.h>
int check(int a,int b){
    static int m=0;
    m=m+b;
    if(m%a==0 && m%b==0)
    return m;
    return check(a,b);
}
int main(){
    int n1,n2,lcm;
    printf("Enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    lcm=check(n1,n2);
    printf("The LCM of %d and %d = %d",n1,n2,lcm);
    return 0;
}*/
//Write a program in C to print even or odd numbers in given range using recursion
/*#include <stdio.h>
void evenodd(int a, int b);
int main()
{
    int n;
    printf(" Enter N : ");
    scanf("%d", &n);
     
    printf("\n All even numbers from 1 to %d are : ", n);
    evenodd(2, n);
     
    printf("\n\n All odd numbers from 1 to %d are : ", n);
    evenodd(1, n);
    return 0;
}
void evenodd(int a, int b)
{
    if(a>b)
        return;
    printf("%d  ", a);
    evenodd(a+2,b);
}*/











 




