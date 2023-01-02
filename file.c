/*#include<stdio.h>
int main()
{
    FILE*file;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
    else
    {
        printf("File is opened");
        fclose(file);
    }
    return 0;

}*/
//Writing to a file fputc()
/*#include<stdio.h>
#include<string.h>
int main()
{
    FILE   *file;
    char name[20]="Arif Hossen";
    int length=strlen(name);
    int i;

    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;

}*/
//Writing to a file fputs()
/*#include<stdio.h>
int main()
{
    FILE  *file;
    char name[25];
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name = ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);

        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    FILE  *file;
    char name[30];
    int age;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name = ");
        gets(name);
        printf("Enter your age = ");
        scanf("%d",&age);

        fprintf(file,"Name=%s,Age=%d\n",name,age);

        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;

}*/
//Reading a file using fgetc()
/*#include<stdio.h>
int main()
{
    FILE*file;
    char ch;
    file=fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }
    return 0;

}*/
//Reading a file using fgets()
/*#include<stdio.h>
int main()
{
    FILE*file;
    char ch;
    file=fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            fgets(ch,50,file);
            printf("%s\n",ch);
        }

        fclose(file);
    }
    return 0;

}*/
#include<stdio.h>
int main( )
{
    FILE*file;
    char name[50];
    int age, phoneNumber,i,n;
    file=fopen("student.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
    else
    {
        printf("File is opened\n");
        printf("Enter number of students = ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("Enter student name = ");
            scanf("%s",&name);

            printf("Enter student age = ");
            scanf("%d",&age);

            printf("Enter student phoneNumber = ");
            scanf("%d",&phoneNumber);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phoneNumber);
        }
        fclose(file);
    }
    return 0;
}


