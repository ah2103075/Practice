#include<stdio.h>
enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main(){
    enum days_of_week day1,day2;
    day1=Fri;
    day2=Mon;
    int diff = day1-day2;
    printf("Day difference =%d",diff);
    return 0;
}