/*#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<10; i++)
    printf("Alhamdulillah\n");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x=10,y=20,tem;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Before swapping:\n");
    printf("x=%d\n",x);
    printf("y=%d\n",y);

    tem=*ptr1;
    *ptr1=*ptr2;
    *ptr2=tem;
    printf("After swapping:\n");
    printf("x=%d\n",x);
    printf("y=%d\n",y);
return 0;    
}*/
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main()
{
    int num1,num2,a,b,gcd,lcm,tem;
    printf("Enter two numbers :\n ");
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
    printf("GCD = %d\n",gcd);
    printf("LCM = %d\n",lcm);

return 0;    
}*/
//1+2+3+4+........+n=?
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last number of the series = ");
    scanf("%d",&n);
    printf("1+2+3+4+........+%d",n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf(" = %d",sum);
return 0;    
}*/
//1x2+2x3+3x4+........+n1xn2=?
/*#include<stdio.h>
int main()
{
    int a=1,b=2,n1,n2,sum=0 ;
    printf("Enter n1 and n2 = ");
    scanf("%d %d",&n1,&n2);
    printf("1x2+2x3+3x4+4x5+........+%dx%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+1;
    }
    printf(" = %d",sum);
return 0;    
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    FILE*son;
    char name[]="Arif Hossen";
    int length=strlen(name);
    int i;
    son=fopen("as.txt","w");
    if(son==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],son);
        }
        printf("File is written successfully\n");
        fclose(son);
    }
    return 0;
}*/
//Number of vowel,consonant, words, digits and others
/*#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=digit=word=other=0;
    printf("Enter a string = ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           vowel++;
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        consonant++;
        else if(ch>='0'&& ch<='9')
        digit++;
        else if(ch==' ')
        word++;
        else
        other++;
        i++;
    }
    word++;

    printf("Number of vowels =%d\n",vowel);
    printf("Number of consonants =%d\n",consonant);
    printf("Number of digits =%d\n",digit);
    printf("Number of words =%d\n",word);
    printf("Number of others =%d\n",other);

return 0;    
}*/
/*#include<stdio.h>
struct data
{
    int age;
    float salary;
};
int main()
{
    struct data person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Enter age and salay = ");
        scanf("%d %f",&person[i].age,&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
       printf("\n\nInformation for person %d\n",i+1);
       printf("Age =%d\n",person[i].age);
       printf("Salary =%f\n",person[i].salary); 
    }
    return 0;
}*/
/*#include<stdio.h>
void pass(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        printf("%c\n",x[i]);
        i++;
    }
};
int main()
{
    char name[]="Arif Hossen Khan ";
    pass(name);
}*/
/*#include<stdio.h>
void pass(int x[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf(" %d",x[i]);
    }
};
int main()
{
    int number[5]={10,20,30,40,50};
    pass(number);
}*/
/*#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
};
int main()
{
    int n1,n2;
    printf("Enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    printf("The sum is %d",sum(n1,n2));
}*/
/*#include<stdio.h>
void  sum(int a, int b)
{
    printf("The sum is %d",a+b);
};
int main()
{
    int n1,n2;
    printf("Enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    sum(n1,n2);
}*/
/*#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
};
int main(){
    int n;
    printf("Enter any positive number = ");
    scanf("%d",&n);
    printf("Factorial of a number %d is %d",n,fact(n));
}*/
/*#include<stdio.h>
int swapping(int *p, int *q){
    int tem;
    tem=*p;
    *p=*q;
    *q=tem;
};
int main(){
    int n1,n2;
    printf("Enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping : n1=%d n2=%d\n",n1,n2);
    swapping(&n1,&n2);
    printf("After swapping : n1=%d n2=%d",n1,n2);
}*/
//Check odd number and even number
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    if(n&1)
    printf("The number is odd");
    else 
    printf("The number is even");
    return 0;
}*/
// Write a program in C to calculate the sum of numbers from 1 to n using recurtion
/*#include<stdio.h>
int fun(int n){
    int x;
    if(n==1)
    return 1;
    else
    x=n+fun(n-1);
    return (x);
}
int main(){
    int n,sum;
    printf("Enter the last number of range = ");
    scanf("%d",&n);
    sum=fun(n);
    printf("The sum of numbers from 1 to %d = %d\n",n,sum);
    return 0;
}*/
/*#include<stdio.h>
 
int term;
int fibonacci(int prNo, int num);
 
void main() 
{
   static int prNo = 0, num = 1;
    printf(" Input number of terms for the Series (< 20) : ");
    scanf("%d", &term);
    printf(" The Series are :\n"); 
    printf(" 1  ");
    fibonacci(prNo, num);
    printf("\n\n");
}
 
int fibonacci(int prNo, int num) 
{
   static int i = 1;
   int nxtNo;
 
   if (i == term)
      return (0);
   else 
   {
      nxtNo = prNo + num;
      prNo = num;
      num = nxtNo;
      printf("%d  ", nxtNo);
 
      i++;
      fibonacci(prNo, num); //recursion, calling the function fibonacci itself
   }
   return (0);
}*/
/*#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,fibo,count=0;
    printf("Enter the last number of fibonacci series = ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=n1+n2;
            n1=n2;
            n2=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}*/
/*#include<stdio.h>
int findGcd(int a,int b){
    while(a!=b){
        if(a>b)
        return findGcd(a-b,b);
        else
        return findGcd(a,b-a);
    }
}
int main(){
    int num1,num2,gcd;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);
    gcd=findGcd(num1,num2);
    printf("\nThe Gcd of %d and %d is = %d",num1,num2,gcd);
    return 0;
}*/
//Write a program in C to reverse a string using recursion
/*#include<stdio.h>
#define size 200
void ReverseOfString(char *str1)
{
    if(*str1!='\0')
    ReverseOfString(str1+1);
    printf("%c",*str1);
}
int main()
{
    char str1[size];
    printf(" Input any string: ");
    gets(str1);
    ReverseOfString(str1);
}*/
/*#include<stdio.h>
int main(){
    int i,num,count=0;
    printf("Enter any positive number = ");
    scanf("%d",&num);
    for(i=2; i<num; i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0)
    printf("Prime number");
    else 
    printf("Not Prime number");
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b,num1,num2,gcd,lcm,tem;
    printf("Enter two numbers : ");
    scanf("%d %d ",&num1,&num2);
    a=num1;
    b=num2;
    while(b!=0){
        tem=a%b;
        a=b;
        b=tem;
    }
    gcd=a; 
    lcm=(num1*num2)/gcd;
    printf("GCD is %d\n",gcd);
    printf("LCM is %d\n",lcm);
    return 0;

}*/
/*#include<stdio.h>
int main(){
    int i=1;
    start:
    printf("%d ",i);
    i++;
    if(i<=10)
    goto start;
}*/
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
/*#include<stdio.h>
int check(int n,int i){
    if(i==1)
    return 1;
    else if(n%i==0)
    return 0;
    else
    check(n,i-1);
}
int main(){
    int num,prime;
    printf("Input any positive number = ");
    scanf("%d",&num);
    prime=check(num,num/2);
    if(prime==1)
    printf("The number %d is a prime number.",num);
    else
    printf("The number %d is not a prime number.",num);
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
/*#include<stdio.h>
void check(int a,int b);
int main(){
    int n;
    printf("Input N = ");
    scanf("%d",&n);
    printf("\n\nAll the even numbers from 1 to %d :",n);
    check(2,n);
    printf("\n\nAll the odd numbers from 1 to %d :",n);
    check(1,n);
    return 0;
}
void check(int a,int b){
    if(a>b)
    return ;
    printf("%d ",a);
    check(a+2,b);
}*/
/*#include<stdio.h>
int check(int a,int b);
int main(){
    int n1,n2,gcd;
    printf("Input two numbers = ");
    scanf("%d %d",&n1,&n2);
    gcd=check(n1,n2);
    printf("The GCD of %d and %d are = %d",n1,n2,gcd);
    return 0;
}
int check(int a,int b){
    if(a!=b){
        if(a>b)
        return check(a-b,b);
        else 
        return check(a,b-a);
    }
    return a;
}*/
/*#include<stdio.h>
int check(int n,int i);
int main(){
    int num,prime; 
    printf("Enter any positive number = ");
    scanf("%d",&num);
    prime=check(num,num/2);
    if(prime==1)
    printf("The number %d is a prime number .",num);
    else
    printf("The number %d is not a prime number .",num);
    return 0;

}
int check(int n, int i){
    if(i==1)
    return 1;
    else if(n%i==0)
    return 0;
    else 
    check(n,i-1);
}*/
/*#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,fibo,count=0;
    printf("Enter the last number of fibonacci series = ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=n1+n2;
            n1=n2;
            n2=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}*/
/*#include<stdio.h>
int fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter any positive number = ");
    scanf("%d",&n);
    printf("Factorial of a number %d is : %d",n,fact(n));
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a[5]={ 10,20,30,40,50};
    int *ptr,i;
    ptr=&a[0];
    for(i=0; i<5; i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}*/
/*#include<stdio.h>
int numPrint(int n);
int main(){
    int n=1;
    printf("The numbers are : ");
    numPrint(n);
    return 0;
}
int numPrint( int n){
    if(n<=50)
    printf("%d ",n);
    numPrint(n+1);
}*/
/*#include<stdio.h>
int fun(int n);
int main(){
    int n,sum;
    printf("Enter the last number of range = ");
    scanf("%d",&n);
    sum=fun(n);
    printf("The sum of numbers 1 to %d = %d ",n,sum);
    return 0;
}
int fun(int n){
    if(n==1)
    return 1;
    else 
     return n+fun(n-1); 
}*/
/*#include<stdio.h>
int n;
int check(int first,int second);
int main(){
    int first=0,second=1;
    printf("Enter the last number of the fibonacci series = ");
    scanf("%d",&n);
    printf("The fibonacci series are = ");
    printf("1 ");
    check(first,second);
    return 0;
}
int check(int first, int second){
    static int i=1, fibo;
    if(i==n)
    return 0;
    else{
        fibo=first+second;
        first=second;
        second=fibo;
        printf("%d ",fibo);
        i++;
        check(first,second);
    }
}*/
/*#include<stdio.h>
int check(int arr[],int i,int l);
int main(){
    int i,n,arr[100];
    printf("Enter the number of element : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("element [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are : ");
    check(arr,0,n);
    return 0;
}
int check( int arr[], int i, int l){
    if(i>=l)
    return 0;
    else 
    printf("%d ",arr[i]);
    check(arr,i+1,l);
}*/
/*#include<stdio.h>
int n;
int maxcheck(int arr[] );
int main(){
    int arr[50],i,max;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("element [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    max=maxcheck(arr);
    printf("Largest element of the array is : %d\n\n",max);
    return 0;
}
int maxcheck(int arr[]){
    static int i=0,max=-9999;
    if(i<n){
        if(max<arr[i])
        max=arr[i];
        i++;
        maxcheck(arr);
    }
    return max;
}*/
/*#include<stdio.h>
int n;
int mincheck(int arr[] );
int main(){
    int arr[50],i,min ;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("element [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    min=mincheck(arr);
    printf(" Small element of the array is : %d\n\n",min);
    return 0;
}
int mincheck(int arr[]){
    static int i=0,min=99999;
    if(i<n){
        if(min>arr[i])
        min=arr[i];
        i++;
        mincheck(arr);
    }
    return min;
}*/
/*#include<stdio.h>
#define size 50
int i=0;
void check(char str []);
int main()
{
    char str[size];
    printf("Enter any string : ");
    gets(str);
    check(str);
}
void check(char str [])
{
    if(str[i]!='\0')
    check(str+1);
    printf("%c",str[i]);
}*/
//Write a program in C to reverse a string using recursion
/*#include<stdio.h>
#define size 100
char *check(char str[]){
    static int i=0;
    static char revstr[size];
    if(*str){
        check(str+1);
        revstr[i++]=*str;
    }
    return revstr;
}
int main(){
    char str[size],*revstr;
    printf("Enter any string : ");
    gets(str);
    revstr=check(str);
    printf("The reversed string is : %s\n ",revstr);
    return 0;
}*/
/*#include<stdio.h>
int check(int n, int i){
    if(i==1)
    return 1;
    else if(n%i==0)
    return 0;
    else
    return check(n,i-1);
}
int main(){
    int num,prime;
    printf("Enter any positive number : ");
    scanf("%d",&num);
    prime=check(num,num/2);
    if(prime==1 )
    printf("The number %d is a prime number.",num);
    else 
    printf("The number %d is not a prime number.",num);
    return 0;
}*/
/*#include<stdio.h>
int check(int a, int b){
if(a!=b){
    if(a>b)
    return check(a-b,b);
    else 
    return check(a,b-a);
    }
    return a;
}
int main(){
    int n1,n2,gcd;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    gcd=check(n1,n2);
    printf("The GCD of %d and %d is : %d\n",n1,n2,gcd);
    return 0;
}*/
/*#include<stdio.h>
int check(int a,int b){
    static int m=0;
    m+=b;//m=m+b;
    if((m%a==0 )&&(m%b==0))
    return m;
    else 
    return check(a,b);
}
int main(){
    int n1,n2,lcm;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    lcm=check(n1,n2);
    printf("The LCM of %d and %d is : %d\n\n",n1,n2,lcm);
    return 0;
}*/
/*#include<stdio.h>
int evenodd(int a,int b){
    if(a>b)
    return 0;
    else 
    printf("%d ",a);
    evenodd(a+2,b);
}
int main(){
    int n;
    printf("Enter the last number of range : ");
    scanf("%d",&n);
    printf("\n\nAll even number from 1 to %d :",n);
    evenodd(2,n);
    printf("\n\nAll odd number from 1 to %d :",n);
    evenodd(1,n);
    return 0;
}*/
/*#include<stdio.h>
union test{
    int x,y;
};
int main(){
    union test t1;
    t1.x=10;
    printf("x = %d\n",t1.x);
    printf("y = %d\n",t1.y);
}*/
/*#include<stdio.h>
int main(){
    char s[]="Arif Hossen";
    int i=0;
    while(s[i]!='\0'){
        printf("%c\n ",s[i]);
        i++;
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char s[]="Arif Hossen";
    int len=strlen(s);
    printf("Length = %d\n ",len);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char s[]="Arif Hossen";
    int i=0, len=0;
    while(s[i]!='\0'){
        len++;
        i++;
    }
    printf("Length = %d\n ",len);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="My name is ";
    char s2[]="Md. Arif hossen";
    strcat(s1,s2);
    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="My name is ";
    char s2[]="Md. Arif hossen";
    int a = strcmp(s1,s2);
    if(a==0)
    printf("Strings are equal");
    else 
    printf("Strings are not equal");
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Md. Arif hossen";
    printf("Before reverse str = %s\n",str);
    strrev(str);
    printf("After reverse str = %s\n",str);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the last number of fibonacci series : ");
    scanf("%d",&n);
    int a[n];
    a[0]=0,a[1]=1;
    for(i=2;i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i,j,row,col;
    printf("Enter the numbers of rows and columns : ");
    scanf("%d %d",&row,&col);
    int A[row][col],B[row][col],result[row][col];
    printf("Enter elements  A matrix : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter elements  B matrix : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
           result[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\n\n");
    printf(" A = ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n\n");
    }
    printf(" B = ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("\t");
            printf("%d",B[i][j]);
        }
        printf("\n\n");
    }
    printf(" A+B = ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("\t");
            printf("%d",result[i][j]);
        }
        printf("\n\n");
    }
}*/
/*#include<stdio.h>
int main(){
    int i,j,k,r1,r2,c1,c2,sum=0;
    printf("Enter the numbers of rows and columns  A matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the numbers of rows and columns  B matrix : ");
    scanf("%d %d",&r2,&c2);
    int A[r1][c1],B[r2][c2],result[r1][c2];
    while(c1!=r2){
        printf("Error !!! Because c1!=r2 \n");
        printf("Enter the numbers of rows and columns  A matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the numbers of rows and columns  B matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("Enter elements  A matrix : \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter elements  B matrix : \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++){
                sum=sum+A[i][k]*B[k][j];
            }    
            result[i][j]=sum;
            sum=0;
           
        }
    }
    printf("\n\n");
    printf(" A = ");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n\n");
    }
    printf(" B = ");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("\t");
            printf("%d",B[i][j]);
        }
        printf("\n\n");
    }
    printf(" AxB = ");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("\t");
            printf("%d",result[i][j]);
        }
        printf("\n\n");
    }
}*/
//Transpose matrix
/*#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the number of rows and columns A matrix : ");
    scanf("%d %d",&row,&col);
    int A[row][col],transpose[col][row];

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
/*#include<stdio.h>
int main()
{
    int n,count=0,fibo,first=0,second=1;
    printf("Enter the last number of fibonacci series : ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first + second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}*/
