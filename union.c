/*#include<stdio.h>
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x=10;
    printf("t1.x=%d\n",t1.x);
    printf("t1.y=%d\n",t1.y);

    t1.y=20;
    printf("t1.x=%d\n",t1.x);
    printf("t1.y=%d\n",t1.y);
    return 0;
}*/
#include<stdio.h>
union test1
{
    int x;
};
union test2
{
    int x;
    char y;
};
union test3
{
    int y;
    double d;
    int r;
};
struct test4
{
    int x;
    char name[20];
    double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Sizeof(t1)=%d\n",sizeof(t1));
    printf("Sizeof(t2)=%d\n",sizeof(t2));
    printf("Sizeof(t3)=%d\n",sizeof(t3));
    printf("Sizeof(t4)=%d\n",sizeof(t4));
    return 0;
}