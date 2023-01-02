/*#include<stdio.h>
int main(){
    int i,n,first=0, second=1,fibo;
    printf("Input the last number of fibonacci series : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        if(i<=1){
            fibo=i;
        }
        else{
                fibo=first+second;
                first=second; 
                second=fibo;
            }
            printf("%d ",fibo);
    }
    return 0;
}*/
// write a program in c to print fibonacci series using recursion
/*#include<stdio.h>
int n;
int checkfibonacci(int a, int b);
int main(){
    int first=0, second=1;
    printf("Enter the last number of fibonacci series : ");
    scanf("%d",&n);
    printf("The fibonacci series are : \n");
    printf("1 ");
    checkfibonacci(first,second);
}
int checkfibonacci(int a, int b){
    static int i=1,fibo;
    if(i==n)
    return 0;
    else{
        fibo=a+b;
        a=b;
        b=fibo;
        printf("%d ",fibo);
        i++;
        checkfibonacci(a,b);
    }
}*/