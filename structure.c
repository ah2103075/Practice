/*#include<stdio.h>
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person1,person2;


    person1.age=28;
    person1.salary=1787.56;
    printf("Person1 :\n");
    printf("Age=%d\n", person1.age);
    printf("Salary=%.2f\n", person1.salary);

    printf("\n\n");
    person2.age=30;
    person2.salary=2344.90;
    printf("Person2 :\n");
    printf("Age=%d\n", person2.age);
    printf("Salary=%.2f\n", person2.salary);
    return 0;

}*/
#include<stdio.h>
struct Person 
{
    int age;
    float salary;
};
int main()
{
    struct Person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Enter Age = ");
        scanf("%d",&person[i].age);
        printf("Enter Salary = ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for person%d\n",i+1);
        printf("Age =%d\n",person[i].age);
        printf("Salary =%f\n",person[i].salary);
    }

}
