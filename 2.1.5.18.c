/*Cleaned up isLeapYear formula since the code they gave us in invalid.
* This makes the March 1st 2016 answer shown in the excercise wrong*/

#include <stdio.h>

int isLeapYear(int year);

int main()
{
    int day, month, year, i, total=0;
    printf("Enter day: ");
    scanf("%d",&day);
    printf("Enter month: ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);

    int daysOfMonths[13] = {31,0,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<month-1;i++)
        if (i==1)
            total+=isLeapYear(year);
        else
            total+=daysOfMonths[i];
    total+=day;
    printf("The day of the year: %d\n",total);
}

int isLeapYear(int year)
{
    if (year%4==0 && year%100!=0 || year%4==0 && year%100!=0 && year%400!=0)
        return 29;
    else
        return 28;
}
