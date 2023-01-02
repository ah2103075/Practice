/*#include<stdio.h>
int main()
{
    char s1[5];
    s1[0]='A';
    s1[1]='R';
    s1[2]='I';
    s1[3]='F';
    s1[4]='\0';
    printf("S1 = %s",s1);
return 0;    
}*/
/*#include<stdio.h>
int main()
{
    char s1[5]={ 'A', 'R' , 'I'  ,'F','\0'};

    printf("S1=%s",s1);
return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s1[]=" Arif Hossen ";

    printf("S1=%s",s1);
return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name = ");
    scanf("%s",&s1);

    printf("Full name =%s\n",s1);
return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name = ");
    gets(s1);

    printf("Full name =%s\n",s1);
return 0;
}*/
#include<stdio.h>
int main()
{
    char s1[]=" Alhamdulillah ";
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
return 0;
}
/*#include<stdio.h>
int main()
{
    char s1[]="Arif Hossen";
    int len=strlen(s1);
    printf("Length =%d\n",len);
return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s1[]="Alhamdulillah";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length =%d\n",len);
return 0;
}*/
//Copy a string using strcpy() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char source[]=" Md. Arif Hossen ";
    char target[20];
    strcpy(target,source);
    printf("Source String =%s\n",source);
    printf("Target String =%s\n",target);
return 0;    
}*/
//Concating  string using  strcat() function
/*#include<stdio.h>
/*#include<string.h>
int main()
{
    char str1[]=" My name is ";
    char str2[]=" Md. Arif Hossen ";
    strcat(str1,str2);
    printf("Str1 =%s\n",str1);
    printf("Str2 =%s\n",str2);
   
return 0;    
}*/
//Concating  string  without strcat() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50]=" My name is ";
    char str2[]=" Md. Arif Hossen ";
    int len=strlen(str1),i=0;
    while(str2[i]!='\0')
    {
        str1[len+i]=str2[i];
        i++;
    }
    printf("Str1 =%s\n",str1);
   
   
return 0;    
}*/
//Comparing strings using strcmp() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]=" Md. Arif Hossen ";
    char str2[]=" Md. Arif Hossen ";
    int a=strcmp(str1,str2);
    if(a==0)
    printf("Strings are equal");
    else
    printf("Strings are not equal");

   
   
return 0;    
}*/
//Reverse a strings using strrev() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[]=" Md. Arif Hossen ";
    printf("Str =%s\n",str);
    strrev(str);
    printf("Str =%s\n",str);

return 0;    
}*/
//String swapping
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]=" Bangladesh ";
    char str2[20]=" Pakistan ";
    char tem[20]; 

    printf("Before swapping:\n");
    printf("Str1 =%s\n",str1);
    printf("Str2 =%s\n",str2);

    strcpy(tem,str1);
    strcpy(str1,str2);
    strcpy(str2,tem);
    
    printf("\nAfter swapping:\n");
    printf("Str1 =%s\n",str1);
    printf("Str2 =%s\n",str2);

return 0;    
}*/
//Strupr() and strlwr() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[]=" Md. Arif Hossen ";
    strupr(str);
    printf("Str=%s\n",str);
    strlwr(str);
    printf("Str=%s\n",str);
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
//Number of Capital letter,Small letter  and digits 
/*#include<stdio.h> 
#include<string.h>
int main()
{
    char str[100];
    int i,capital,small,digit;
    i=capital=small=digit=0;
    printf("Enter a string = ");
    gets(str);
    
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        capital++;
        else if(str[i]>=97 && str[i]<=122)
        small++;
        else if(str[i]>=48 && str[i]<=57)
        digit++;
        
        i++;
    }

    printf("Number of capital letter =%d\n",capital);
    printf("Number of small letter =%d\n",small);
    printf("Number of digits =%d\n",digit);
   

return 0;    
}*/

