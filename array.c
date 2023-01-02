#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter 5 numbers : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum is %d\n",sum);
    printf("The average is %.2f",(float)sum/5);
    return 0;
}
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("How many numbers  = ");
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
        max=num[i];
    }
    printf("The maximum value is %d",max);
   
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("How many numbers  = ");
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for(i=1; i<n; i++)
    {
        if(min>num[i])
        min=num[i];
    }
    printf("The minimum value is %d",min);
   
    return 0;

}*/
//Fibonacci series using array
/*#include<stdio.h>
int main() 
{
    int i,n;
    printf("How many fibonacci numbers  = ");
    scanf("%d",&n);
    int a[n];
    a[0]=0, a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("% d",a[i]);
    }
 
    return 0;

}*/
//Adding two matrix
/*#include<stdio.h>
int main()
{
    int i,j,row,col;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter number of rows and columns = ");
    scanf("%d %d",&row,&col);
    printf("Enter of elements A matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col; j++)
        {
            printf("A[%d][%d]  =  ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf(" A = ");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf(" %d",A[i][j]);
        }
        printf("\n\n");
    }
      printf("Enter of elements B matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col; j++)
        {
            printf("B[%d][%d]  =  ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    printf(" B = ");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col; j++)
        {
            C[i][j]=A[i][j]+B[i][j];

        }
        printf("\n");
    }
     printf(" A+B = ");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }

return 0;
}*/
//Matrix multiplication
/*#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    int A[10][10],B[10][10],result[10][10];
    printf("Enter the number of rows and columns  A matrix = ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns  B matrix = ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!! because  c1!=r2 \n ");
        printf("Enter the number of rows and columns  A matrix = ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the number of rows and columns  B matrix = ");
        scanf("%d %d",&r2,&c2);
    }
     printf("\n");
    printf("Enter elements A matrix = \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]  =  ",i,j);
            scanf("%d",&A[i][j]);
        }

    }
    printf("\n");
    printf("Enter elements B matrix = \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]  =  ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum= sum+A[i][k]*B[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
        printf("\n");
    }
    printf(" A = ");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t");
            printf(" %d",A[i][j]);
        }
        printf("\n\n");
    }
    printf(" B = ");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t");
            printf(" %d",B[i][j]);
        }
        printf("\n\n ");
    }

    printf("AxB = ");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t");
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
//Transpose matrix
/*#include<stdio.h>
int main()
{
    int i,j,row,col;
    int A[10][10],transpose[10][10];
    printf("Enter the number of rows and columns = ");
    scanf("%d %d",&row,&col);

    printf("Enter elements A matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j] );
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]=A[i][j];
        }
    }
    printf("\n");
    printf(" A matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d",A[i][j] );
        }
        printf("\n");
    }
    printf("Transpose matrix :\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf(" %d",transpose[i][j] );
        }
        printf("\n");
    }
    return 0;
}*/
//Sum of diagonal elements of a matrx
/*#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3],sum=0;
    printf("Enter  elements  A matrix :\n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j] );
        }
    }
    printf("\n");
    printf("A = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t");
            printf("%d",A[i][j] );
        }
        printf("\n");
    }
    printf("\n");
    printf("Diagonal elements = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf(" %d",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of diagonal elements : %d",sum);
    printf("\n\n");
    return 0;
}*/
//sum of upper and lower triangle elements 
/*#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3],Uppersum=0,Lowersum=0;
    printf("Enter elements A matrix :\n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j] );
        }
    }
    printf("\n");
    printf("A =");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t");
            printf("%d",A[i][j] );
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                Uppersum=Uppersum+A[i][j];
            }
             if(i>j)
            {
                Lowersum=Lowersum+A[i][j];
            }
        }
    }
    printf("\nSum of Upper triangle elements =%d",Uppersum);
    printf("\nSum of Lower triangle elements =%d",Lowersum);
    printf("\n\n");
    return 0;
}*/




