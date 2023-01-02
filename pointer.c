/*#include<stdio.h>
int main( )
{
    int x=5;
    int *p;
    p=&x;
    printf("Value of x =%d\n",x);
    printf("Address of x =%d\n",&x);
    printf("Address of p =%d\n",p);
    printf("Content of p =%d\n",*p);
    printf("Address of p variable =%d\n",&p);
    return 0;

}*/
/*#include<stdio.h>
int main( )
{
    int x=10,y=20,z=30;
    int *p;
    p=&x;
    printf("x =%d\n",*p);

     p=&y;
    printf("y =%d\n",*p);

    p=&z;
    printf("z =%d\n",*p);
    
    return 0;

}*/
/*#include<stdio.h>
int main( )
{
    int x=10,y=20,sum;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2;
    printf("The Sum is =%d\n",sum);

    return 0;

}*/
//Swapping two numbers using pointer
/*#include<stdio.h>
int main( )
{
    int x=10,y=20,tem;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Before swapping:\n");
    printf("x =%d\n",x);
    printf("y =%d\n",y);

     tem=*ptr1;
    *ptr1=*ptr2;
    *ptr2=tem;

    printf("After swapping:\n");
    printf("x =%d\n",x);
    printf("y =%d\n",y);
    
    return 0;

}*/
//Swapping two numbers using pointer and function
/*#include<stdio.h>
int swapping (int *ptr1, int *ptr2)
{
    int tem;
    tem=*ptr1;
    *ptr1=*ptr2;
    *ptr2=tem;

}
int main()
{
    int x=10, y=20;
    printf("Before swapping : x=%d, y=%d\n",x,y);
    swapping(&x,&y);
    printf("After swapping : x=%d, y=%d\n",x,y);
}*/
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *ptr,i;
    ptr=&a[0];
    for(i=0; i<5; i++)
    {
        printf(" %d",*ptr);
        ptr++;
    }
    return 0;
}


