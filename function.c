/*#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    printf("Enter two numbers = ");   
    scanf("%d %d",&num1,&num2);
    printf("The Sum is =%d",sum(num1,num2));
}*/
/*#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    printf("The Sum is =%d",sum(45,89));
}*/
/*#include<stdio.h>
void sum(int a, int b, int c)
{
   printf("The Sum is =%d",a+b+c);
}
int main()
{
   sum(19,23,8);
}*/
/*#include<stdio.h>
void sum(int a, int b, int c)
{
   printf("The Sum is =%d\n",a+b+c);
}
void sub(int a, int b)
{
    printf("The Subtraction is =%d",a-b);
}
int main()
{
   sum(19,23,8);
   sub(122,97);
}*/
/*#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter any integer number = ");   
    scanf("%d",&num);
    printf("The square is =%d",square(num));
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    double result=pow(n1,n2);
    printf("The result is=%.2lf\n",result);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    double base,height,area;
    printf("Enter base and height = ");
    scanf("%lf %lf",&base,&height);
    area=0.5*base*height;
    printf("The Area is =%.2lf\n",area); 
    
return 0;
}*/
/*#include<stdio.h>
double triangleArea(double b, double h)
{
    return 0.5*b*h;
}
int main()
{
    double base,height,area;
    printf("Enter base and height = ");
    scanf("%lf %lf",&base,&height);
    area=triangleArea(base,height);
    printf("The Area is =%.2lf\n",area); 
    
}*/
/*#include<stdio.h>
double area(double b, double h)
{
     printf("The area is =%.2lf\n",0.5*b*h);
}
int main()
{
   area(3,9);
}*/
//Passing array to a function
/*#include<stdio.h>
void display(int x[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf(" %d",x[i]);
    }
}
int main()
{
    int num[]={10,20,30,40,50};
    display(num);
}*/
//Passing String to a function
/*#include<stdio.h>
void display(char s1[])
{
    int i=0;
    while(s1[i]!='\0')
    {
        printf(" %c\n",s1[i]);
        i++;
    }
}
int main()
{
    char str[]="Alhamdulillah";
    display(str);
}*/
#include<stdio.h>
int checkOddEven(int n){
    return(n&1);
};
int main(){
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    if(checkOddEven(n))
    printf("The number is odd\n");
    else
    printf("The number is even");
    return 0;
}


