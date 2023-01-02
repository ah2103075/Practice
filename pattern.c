#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
return 0;    
}
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);
        }
        printf("\n");
    }
return 0;  
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);
        }
        printf("\n");
    }
     for(row=n-1;row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);
        }
        printf("\n");
    }
return 0; 
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }
     for(row=n-1;row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }
return 0; 
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(row=n-1;row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0; 
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
     
return 0; 
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
     for(col=1; col<=row; col++)
        {
            printf("%c",col+64);
        }
        printf("\n"); 
    }          
return 0; 
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf(" %d",row*col);
        }
        printf("\n");
    }
return 0;    
}*/
// Pyramid-1
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(row*2)-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;    
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n;row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(row*2)-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;    
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(row*2)-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row=n-1;row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(row*2)-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;    
}*/
// Pyramid-2
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//Square pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if( row==1 || row==n || col==1 || col==n )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Square and tectangle  pattern
/*#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter rows and columns = ");
    scanf("%d %d",&row,&col);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if( i==1 || i==row || j==1 || j==col )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Triangle pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if( col==1|| row==n || row==col )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Triangle pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n; col++)
        {
            if( col==1|| row==n || row==col )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Triangle pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1;col<=n;col++)
        {
            if( col==1|| row==n || row==col )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Triangle pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1;col<=n;col++)
        {
            if( col==1|| row==n || row==col )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
// X  pattern
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(  row==col || row+col==n+1 )
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
// Floyd's Triangle pattern
/*#include<stdio.h>
int main()
{
    int n,row,col,count=0;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf(" %d ",++count);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d ",&n);
    for(row=1;row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
return 0;
}*/














